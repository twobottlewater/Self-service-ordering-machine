#include "loginwin.h"
#include "ui_loginwin.h"
#include "mainwindow.h"

loginWin::loginWin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginWin)
{
    ui->setupUi(this);
}

loginWin::~loginWin()
{
    delete ui;
}


void loginWin::on_pushButton_clicked()
{
    int tableNumber = ui->lineEdit->text().toInt(); // 获取餐桌号
       int dineNumber = ui->lineEdit_2->text().toInt(); // 获取就餐人数
    MainWindow *mWin=new MainWindow(nullptr, tableNumber, dineNumber);
    mWin->show();
    this->close();
}
