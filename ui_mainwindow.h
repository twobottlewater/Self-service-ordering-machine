/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <dishes.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    dishes *widget;
    QPushButton *payBt;
    QPushButton *serverBt;
    QPushButton *orderBt;
    QLabel *time;
    QLabel *d_num;
    QLabel *t_num;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 480);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new dishes(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(160, 0, 641, 481));
        payBt = new QPushButton(centralwidget);
        payBt->setObjectName(QStringLiteral("payBt"));
        payBt->setGeometry(QRect(20, 240, 91, 61));
        serverBt = new QPushButton(centralwidget);
        serverBt->setObjectName(QStringLiteral("serverBt"));
        serverBt->setGeometry(QRect(20, 330, 91, 61));
        orderBt = new QPushButton(centralwidget);
        orderBt->setObjectName(QStringLiteral("orderBt"));
        orderBt->setGeometry(QRect(20, 410, 91, 61));
        time = new QLabel(centralwidget);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(0, 0, 171, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(6);
        time->setFont(font);
        time->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        d_num = new QLabel(centralwidget);
        d_num->setObjectName(QStringLiteral("d_num"));
        d_num->setGeometry(QRect(10, 130, 151, 31));
        t_num = new QLabel(centralwidget);
        t_num->setObjectName(QStringLiteral("t_num"));
        t_num->setGeometry(QRect(10, 80, 141, 41));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        payBt->setText(QApplication::translate("MainWindow", "Pay", 0));
        serverBt->setText(QApplication::translate("MainWindow", "\344\272\272\345\267\245\346\234\215\345\212\241", 0));
        orderBt->setText(QApplication::translate("MainWindow", "\350\256\242\345\215\225", 0));
        time->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        d_num->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        t_num->setText(QApplication::translate("MainWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
