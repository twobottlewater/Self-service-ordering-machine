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
    MainWindow *mWin=new MainWindow();
    mWin->show();
    this->close();
}
