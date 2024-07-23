#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QDate>
#include <QVector>
#include "menu.h"
#include <QDebug>//
#include <QMap>//
#include <QMessageBox>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_payBt_clicked();

    void on_serverBt_clicked();

    void on_orderBt_clicked();
     void update_time();

private:
    Ui::MainWindow *ui;
    QTimer *mtime;
    QVector<menu*> varr;
    int menuprice;//菜单价格
    int dine_number;//餐桌人数
    int table_number;//订单号
    bool confirm;
    bool ispayment;

};

#endif // MAINWINDOW_H
