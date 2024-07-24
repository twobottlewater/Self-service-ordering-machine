#ifndef DISHES_H
#define DISHES_H

#include <QWidget>
#include "menu.h"
namespace Ui {
class dishes;
}

class dishes : public QWidget
{
    Q_OBJECT

public:
    explicit dishes(QWidget *parent = nullptr);
    ~dishes();
     QVector<menu*> getMenuItems() const;

private:
    Ui::dishes *ui;
     QVector<menu*> menuItems;
};

#endif // DISHES_H
