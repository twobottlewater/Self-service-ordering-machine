#ifndef ORDER_H
#define ORDER_H

#include <QMainWindow>

namespace Ui {
class Order;
}

class Order : public QMainWindow
{
    Q_OBJECT

public:
    explicit Order(QWidget *parent = nullptr);
    ~Order();
    void setOrderedItems(const QMap<QString, QPair<int, QString>> &items);
signals:
    void ret_confirm_menu(bool now);

private:
    Ui::Order *ui;
};

#endif // ORDER_H
