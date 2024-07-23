#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QMainWindow>
#include <QPushButton>
#include <QKeyEvent>
#include <QCoreApplication>
#include <QApplication>

class mypushbutton : public QPushButton
{
    Q_OBJECT
public:
    explicit mypushbutton(QWidget *parent = nullptr);
private slots:
    void fun();

};


class mydelbutton : public QPushButton
{
    Q_OBJECT
public:
    explicit mydelbutton(QWidget *parent = nullptr);
private slots:
    void del_fun();

};


#endif // MYPUSHBUTTON_H
