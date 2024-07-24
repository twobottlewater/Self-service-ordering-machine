#include "order.h"
#include "ui_order.h"
#include "mainwindow.h"

//处理json的头文件
#include <QJsonArray>
#include <QJsonValue>
#include <QTcpSocket>
#include <QJsonObject>
#include <QJsonDocument>

Order::Order(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Order)
{
    ui->setupUi(this);

//    this->confirm = false;
//     this->Jdata = packagingJson(parent);
//     MainWindow *father = (MainWindow*)parent;

     //创建头行
     ui->tableWidget->setColumnCount(3);
     ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "菜名" << "数量" << "单价");
     //下面的行数在下面创建


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
    qDebug()<<"json里面的数据"<<orderedItems.size();
        QJsonObject obj;
        QJsonArray oarr;

        for (auto it = orderedItems.begin(); it != orderedItems.end(); ++it) {
            QJsonObject item;
            item.insert("菜名", it.key());
            item.insert("数量", it.value().first);
            item.insert("单价", it.value().second.toDouble());
            oarr.append(item);
        }

//        QJsonObject outside;
//        outside.insert("餐桌号", MainWindow->table_number);
//        outside.insert("就餐人数", MainWindow->dine_number);
//        outside.insert("订单", oarr);

//        QJsonDocument doc(outside);
//        QString Jdata = QString(doc.toJson(QJsonDocument::Compact));
        qDebug() << Jdata;

        return Jdata;
}


void Order::on_submitBt_clicked()
{
  QString jsonData = packagingJson();
}
