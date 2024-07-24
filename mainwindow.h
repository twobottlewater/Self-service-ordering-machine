#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QDate>
#include <QVector>
#include <QDebug>//
#include <QMap>//
#include <QMessageBox>
#include <QMessageBox>
#include <QtNetwork/QTcpSocket>
#include "dishes.h"
#include "menu.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr, int table_number = 0, int dine_number = 0);
    ~MainWindow();



    QTcpSocket &get_socket();
    QVector<menu*> get_menu();
    int get_number();
    int get_table_num();
    void get_confirm_menu(bool now);



private slots:
    void on_payBt_clicked();
    void on_serverBt_clicked();
    void on_orderBt_clicked();

    void update_time();

    void add_food(const QString &foodName, const QString &foodPrice, int count);
    void sub_food(const QString &foodName, const QString &foodPrice, int count);

    QString generateOrderNumber();
    double getPrice() const;


private:
    Ui::MainWindow *ui;
    QTimer *mtime;
    QVector<menu*> varr;
    int menuprice;//菜单价格
    int dine_number;//餐桌人数
    int table_number;//订单号
    bool confirm;
    bool ispayment;
   // QTcpSocket msock;
    QMap<QString, QPair<int, QString>> orderedItems; // QMap存储食物名称、数量和价格
    void setupMenuConnections();
      QString orderNumber;




};

#endif // MAINWINDOW_H
