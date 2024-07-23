#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDate>
#include <QIcon>
#include <QMessageBox>
#include <QTime>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mtime=new QTimer(this);
    mtime->start(1000); // 定时器每秒触发一次
    connect(mtime, &QTimer::timeout, this, &MainWindow::update_time); // 连接定时器的timeout信号到update_time槽

    ui->t_num->setText("餐桌号：" + QString::number(table_number));
    ui->d_num->setText("就餐人数：" + QString::number(dine_number));

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

}

//更新时间函数
void MainWindow::update_time()
{
    ui->time->setText(QDate::currentDate().toString("yyyy-MM-dd")+" "+QTime::currentTime().toString("hh:mm:ss"));
}
