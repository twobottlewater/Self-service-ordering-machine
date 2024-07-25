/********************************************************************************
** Form generated from reading UI file 'order.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDER_H
#define UI_ORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Order
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QPushButton *cancelBt;
    QPushButton *submitBt;

    void setupUi(QMainWindow *Order)
    {
        if (Order->objectName().isEmpty())
            Order->setObjectName(QStringLiteral("Order"));
        Order->resize(362, 390);
        centralwidget = new QWidget(Order);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 10, 311, 271));
        tableWidget->setStyleSheet(QStringLiteral(""));
        cancelBt = new QPushButton(centralwidget);
        cancelBt->setObjectName(QStringLiteral("cancelBt"));
        cancelBt->setGeometry(QRect(20, 310, 121, 51));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelBt->setIcon(icon);
        submitBt = new QPushButton(centralwidget);
        submitBt->setObjectName(QStringLiteral("submitBt"));
        submitBt->setGeometry(QRect(190, 310, 141, 51));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/yes.png"), QSize(), QIcon::Normal, QIcon::Off);
        submitBt->setIcon(icon1);
        Order->setCentralWidget(centralwidget);

        retranslateUi(Order);

        QMetaObject::connectSlotsByName(Order);
    } // setupUi

    void retranslateUi(QMainWindow *Order)
    {
        Order->setWindowTitle(QApplication::translate("Order", "MainWindow", 0));
        cancelBt->setText(QApplication::translate("Order", "\345\217\226\346\266\210\350\256\242\345\215\225", 0));
        submitBt->setText(QApplication::translate("Order", "\347\241\256\350\256\244\346\217\220\344\272\244\350\256\242\345\215\225", 0));
    } // retranslateUi

};

namespace Ui {
    class Order: public Ui_Order {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_H
