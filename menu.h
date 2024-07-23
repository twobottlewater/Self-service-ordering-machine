#ifndef MENU_H
#define MENU_H

#include <QWidget>

namespace Ui {
class menu;
}

class menu : public QWidget
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();

    void setStyle(int number, QString img, QString foodname, QString money);
    QString get_foodname();
    int food_num();
    QString get_foodprice();
    bool isPitch_On();
    void setFoodprice(const QString &value);
    QString getFoodprice() const;

signals:
    void addsignals();

private slots:
    void on_addBt_clicked();
    void on_subBt_clicked();

private:
    Ui::menu *ui;

    int food_number;
    int food_count;
    bool flag;
    QString foodname;
    QString foodprice;
};

#endif // MENU_H
