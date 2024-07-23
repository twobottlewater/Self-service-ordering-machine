#include "mypushbutton.h"
#include <QDebug>
#include <QLineEdit>

mypushbutton::mypushbutton(QWidget *parent) : QPushButton(parent)
{
    //关联clicked信号
    connect(this,SIGNAL(clicked()),this,SLOT(fun()));
}

mydelbutton::mydelbutton(QWidget *parent) : QPushButton(parent)
{
    //关联clicked信号
    connect(this,SIGNAL(clicked()),this,SLOT(del_fun()));
}



//定义我们自己的槽函数
void mypushbutton::fun()
{

    QPushButton *p=qobject_cast<QPushButton *>(sender());
    QString str=p->text();//获取字面值
    if (str=="del")
    {
         qDebug()<<"哈哈哈哈"<<str;
         //自定义一个按键事件
         QKeyEvent *keyevent=new QKeyEvent(QEvent::KeyPress,Qt::Key_Backspace,Qt::NoModifier,str);
         //把按键事件发送出去
         QCoreApplication::postEvent(QApplication::focusWidget(),keyevent);

    }

    else
    {
        //自定义一个按键事件
    QKeyEvent *keyevent=new QKeyEvent(QEvent::KeyPress,str.toInt(),Qt::NoModifier,str);
    //把按键事件发送出去
    QCoreApplication::postEvent(QApplication::focusWidget(),keyevent);
    //测试一下
    qDebug()<<"你按的是"<<str;

    }



}

void mydelbutton::del_fun()
{
     QPushButton *p=qobject_cast<QPushButton *>(sender());
}
