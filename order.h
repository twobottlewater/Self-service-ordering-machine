#ifndef ORDER_H
#define ORDER_H

#include <QMainWindow>
#include <QMap>
#include <QPair>




namespace Ui {
class Order;
}

class Order : public QMainWindow
{
    Q_OBJECT

public:
    explicit Order(QWidget *parent = nullptr);
    ~Order();
    double totalPrice;
    void setOrderedItems(const QMap<QString, QPair<int, QString>> &items);

     //void sendJsonData();
     QString packagingJson();//

signals:
    void ret_confirm_menu(bool now);

private slots:
    void on_cancelBt_clicked();

    void on_submitBt_clicked();

private:
    Ui::Order *ui;
       QMap<QString, QPair<int, QString>> orderedItems;
       QString Jdata;

};

#endif // ORDER_H
