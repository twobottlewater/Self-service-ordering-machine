#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDate>
#include <QIcon>
#include <QMessageBox>
#include <QTime>
#include "order.h"
#include "menu.h"


MainWindow::MainWindow(QWidget *parent, int table_number, int dine_number) :
    QMainWindow(parent),

    ui(new Ui::MainWindow),
    dine_number(dine_number),
    table_number(table_number),
    confirm(false),
    ispayment(false)

{
    ui->setupUi(this);

    mtime = new QTimer(this);
    mtime->start(1000); // 定时器每秒触发一次
    connect(mtime, &QTimer::timeout, this, &MainWindow::update_time); // 连接定时器的timeout信号到update_time槽

    ui->t_num->setText("餐桌号：" + QString::number(table_number));
    ui->d_num->setText("就餐人数：" + QString::number(dine_number));

    // 创建并连接菜单项的信号和槽
      setupMenuConnections();
}


MainWindow::~MainWindow()
{
    delete ui;


}

void MainWindow::on_payBt_clicked()
{
    if (!confirm) {
         QMessageBox::warning(this, "提示", "请确认订单后再付款！");
         return;
     } else {
         if (ispayment) {
             QMessageBox::information(this, "提示", "你已支付订单");
             return;
         }

         // 生成订单号
          orderNumber = generateOrderNumber();
          //获取支付价格
         menuprice = getPrice();
         int ret = QMessageBox::information(this, "支付", QString("你需要支付 %1 元").arg(this->menuprice), QMessageBox::No, QMessageBox::Yes);
         if (ret == QMessageBox::Yes) {
             QString payInfo = QString("B.(订单号: %1)\n%2号桌已支付 %3 元").arg(orderNumber).arg(table_number).arg(menuprice);
             QTcpSocket *socket = new QTcpSocket(this);

             connect(socket, &QTcpSocket::connected, [this, socket, payInfo]() {
                 socket->write(payInfo.toUtf8());
                 socket->flush();
                 socket->disconnectFromHost();
                 this->ispayment = true;
             });

             connect(socket,QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error), this, [this, socket](QAbstractSocket::SocketError socketError)
             {
             QMessageBox::warning(this, "错误", "无法连接到服务器: " + socket->errorString());
             socket->deleteLater();
             });

             socket->connectToHost("127.0.0.1", 50001); // 替换为服务器的 IP 地址和端口
         }
     }
}

void MainWindow::on_serverBt_clicked()
{
    QTcpSocket *socket = new QTcpSocket(this);

       connect(socket, &QTcpSocket::connected, [this, socket]()
       {
           QString serviceRequest = QString::number(table_number) + "号桌子需要服务";
           socket->write(serviceRequest.toUtf8());
           socket->flush();
           socket->disconnectFromHost();
       });


    connect(socket,QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error), this, [this, socket](QAbstractSocket::SocketError socketError)
    {
    QMessageBox::warning(this, "错误", "无法连接到服务器: " + socket->errorString());
    socket->deleteLater();
    });

       socket->connectToHost("127.0.0.1", 50001); // 替换为服务器的 IP 地址和端口

}

void MainWindow::on_orderBt_clicked()
{

    if (this->confirm) {
          QMessageBox::warning(this, "提示", "已提交订单，如需修改请呼叫前台！");
          return;
      }
      if (this->orderedItems.size() == 0) {
          QMessageBox::warning(this, "提示", "请先选菜品！");
          return;
      }


        Order *om  = new Order(this->table_number, this->dine_number, this); // 新建一个订单窗口
        connect(om, &Order::ret_confirm_menu, this, &MainWindow::get_confirm_menu);
        // 将 orderedItems 传递给订单窗口
        om->setOrderedItems(orderedItems);
        om->show();
}


//======加菜和减菜的槽函数===========
void MainWindow::add_food(const QString &foodName, const QString &foodPrice, int count)
{
    orderedItems[foodName] = qMakePair(count, foodPrice);
    qDebug() << "Added food:" << foodName << "Price:" << foodPrice << "Count:" << count;
}

void MainWindow::sub_food(const QString &foodName, const QString &foodPrice, int count)
{
    if (count == 0) {
        orderedItems.remove(foodName);
    } else {
        orderedItems[foodName] = qMakePair(count, foodPrice);
    }
    qDebug() << "Subtracted food:" << foodName << "Price:" << foodPrice << "Count:" << count;
}
//=======================================

void MainWindow::get_confirm_menu(bool now)
{
    confirm = now;
}


void MainWindow::setupMenuConnections()
{
    auto dishesWidget = ui->widget; // 假设 dishesWidget 是 Dishes 类的一个实例
    const auto &menuItems = dishesWidget->getMenuItems(); // 假设 Dishes 类有一个 getMenuItems 方法返回所有 menu 项

    for (auto &menuItem : menuItems) {
        connect(menuItem, &menu::addsignals, this, &MainWindow::add_food);
        connect(menuItem, &menu::subsignals, this, &MainWindow::sub_food);
    }
}

//更新时间函数
void MainWindow::update_time()
{
    ui->time->setText(QDate::currentDate().toString("yyyy-MM-dd")+" "+QTime::currentTime().toString("hh:mm:ss"));
}

// 生成订单号
QString MainWindow::generateOrderNumber()
{
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString orderNumber = currentDateTime.toString("MMddhhmmss");
    return orderNumber;
}

//获取订单价格
double MainWindow::getPrice() const
{
    double totalPrice = 0;
    for (auto it = orderedItems.begin(); it != orderedItems.end(); ++it) {
        int quantity = it.value().first;
        double price = it.value().second.toDouble();
        totalPrice += price * quantity;
    }
    return totalPrice;
}
