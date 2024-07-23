#ifndef DISHES_H
#define DISHES_H

#include <QWidget>

namespace Ui {
class dishes;
}

class dishes : public QWidget
{
    Q_OBJECT

public:
    explicit dishes(QWidget *parent = nullptr);
    ~dishes();

private:
    Ui::dishes *ui;
};

#endif // DISHES_H
