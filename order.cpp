#include "order.h"
#include "ui_order.h"
#include "mainwindow.h"

//处理json的头文件
#include <QJsonArray>
#include <QJsonValue>
#include <QTcpSocket>
#include <QJsonObject>
#include <QJsonDocument>
#include <QMessageBox>
#include <QDebug>

Order::Order(int tableNumber, int dineNumber, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Order),
    tableNumber(tableNumber),
    dineNumber(dineNumber)
{
    ui->setupUi(this);

//    this->confirm = false;
//     this->Jdata = packagingJson(parent);
//     MainWindow *father = (MainWindow*)parent;

     //创建头行
     ui->tableWidget->setColumnCount(3);
     ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "菜名" << "数量" << "单价");
     //下面的行数在下面创建


     connect(&socket, &QTcpSocket::connected, this, &Order::recv_server);
    connect(&socket, QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error), this, &Order::handleSocketError);

     // 异步连接到服务器
     socket.connectToHost("192.168.1.16", 50001);
}

Order::~Order()
{
    delete ui;
}

void Order::setOrderedItems(const QMap<QString, QPair<int, QString>> &items)
{
    //先把他接住
     orderedItems = items;


    // 在这里将 items 显示在 UI 上
    // 例如，可以使用 QTableWidget 显示订单信息

    ui->tableWidget->setRowCount(items.size()+1);
     qDebug()<<orderedItems.size();
    int row = 0;
   totalPrice = 0;

    for (auto it = items.begin(); it != items.end(); ++it, ++row) {
        //处理一下字符串和数值的转换
        QString foodName = it.key();
        int quantity = it.value().first;
        double price = it.value().second.toDouble();

        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(it.key()));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(it.value().first)));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(it.value().second));
       totalPrice += price * quantity;

    }
    // 添加总价行
     ui->tableWidget->setItem(row, 0, new QTableWidgetItem("总价"));
     ui->tableWidget->setItem(row, 1, new QTableWidgetItem(""));
     ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(totalPrice, 'f', 2)));

     qDebug() << "Total price: " << totalPrice;
}

void Order::on_cancelBt_clicked()
{
     this->close();
}

//先打包我的数据没问题把


QString Order::packagingJson()
{
    //qDebug()<<"json里面的数据"<<orderedItems.size();


    QJsonObject obj;
    QJsonArray oarr;

    for (auto it = orderedItems.begin(); it != orderedItems.end(); ++it)
    {
        QJsonObject item;
        item.insert("菜名", it.key());
        item.insert("数量", it.value().first);
        item.insert("单价", it.value().second.toDouble());
        oarr.append(item);
    }

    QJsonObject outside;
    outside.insert("餐桌号", this->tableNumber);
    outside.insert("就餐人数", this->dineNumber);
    outside.insert("订单", oarr);
    outside.insert("总价", totalPrice);

    QJsonDocument doc(outside);
    QString Jdata = QString(doc.toJson(QJsonDocument::Compact));
    qDebug() << Jdata;


    //  qDebug()<<"测试"<< this->tableNumber;

    return Jdata;
}


void Order::on_submitBt_clicked()
{

  if (!socket.isOpen()) {
      qDebug() << "Socket is not open!";
      return;
  }

  QString jsonData = packagingJson();
  qDebug() << "Sending JSON Data: " << jsonData;

  socket.write(jsonData.toUtf8());
  confirm = true;
  emit ret_confirm_menu(confirm);
  this->close();
}


void Order::recv_server()  //测试是否连接上服务器
{
    qDebug() << "已链接服务器!";

}
void Order::handleSocketError(QAbstractSocket::SocketError socketError)
{
    qDebug() << "Socket error:" << socket.errorString();
    QMessageBox::critical(this, "Error", "Failed to connect to server: " + socket.errorString());
}
