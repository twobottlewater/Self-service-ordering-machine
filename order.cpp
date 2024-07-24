#include "order.h"
#include "ui_order.h"
#include "mainwindow.h"
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
    // 在这里将 items 显示在 UI 上
    // 例如，可以使用 QTableWidget 显示订单信息
    ui->tableWidget->setRowCount(items.size()+1);
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
