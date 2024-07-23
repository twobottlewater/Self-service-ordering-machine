#include "loginwin.h"
#include "ui_loginwin.h"

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

