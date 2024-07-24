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

}

void MainWindow::on_serverBt_clicked()
{

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

      Order *om = new Order(this); // 新建一个订单窗口
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
