/********************************************************************************
** Form generated from reading UI file 'dishes.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISHES_H
#define UI_DISHES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <menu.h>

QT_BEGIN_NAMESPACE

class Ui_dishes
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    menu *widget;
    menu *widget_2;
    menu *widget_3;
    menu *widget_4;
    menu *widget_5;
    menu *widget_6;
    QWidget *tab_2;
    menu *widget_7;
    menu *widget_8;
    menu *widget_9;
    menu *widget_10;
    QWidget *tab_3;
    menu *widget_11;
    menu *widget_12;
    menu *widget_13;

    void setupUi(QWidget *dishes)
    {
        if (dishes->objectName().isEmpty())
            dishes->setObjectName(QStringLiteral("dishes"));
        dishes->resize(671, 481);
        tabWidget = new QTabWidget(dishes);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 671, 481));
        tabWidget->setStyleSheet(QLatin1String("QTabBar::tab {\n"
"            height: 40px;\n"
"            width: 120px;\n"
"            font-size: 16px;\n"
"            padding: 10px;\n"
"        }\n"
"        QTabBar::tab:selected {\n"
"          background: lightblue;\n"
"        }\n"
"        QTabBar::tab:hover {\n"
"           background: lightgray;\n"
"        }"));
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setElideMode(Qt::ElideLeft);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        widget = new menu(tab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 10, 151, 191));
        widget_2 = new menu(tab);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(240, 10, 151, 191));
        widget_3 = new menu(tab);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(450, 10, 151, 191));
        widget_4 = new menu(tab);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(30, 220, 151, 191));
        widget_5 = new menu(tab);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(240, 220, 151, 191));
        widget_6 = new menu(tab);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(450, 220, 151, 191));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        widget_7 = new menu(tab_2);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setGeometry(QRect(20, 30, 131, 181));
        widget_8 = new menu(tab_2);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setGeometry(QRect(260, 30, 131, 181));
        widget_9 = new menu(tab_2);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setGeometry(QRect(460, 30, 131, 181));
        widget_10 = new menu(tab_2);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setGeometry(QRect(20, 230, 131, 181));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        widget_11 = new menu(tab_3);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        widget_11->setGeometry(QRect(30, 110, 131, 181));
        widget_12 = new menu(tab_3);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        widget_12->setGeometry(QRect(230, 110, 131, 181));
        widget_13 = new menu(tab_3);
        widget_13->setObjectName(QStringLiteral("widget_13"));
        widget_13->setGeometry(QRect(460, 110, 131, 181));
        tabWidget->addTab(tab_3, QString());

        retranslateUi(dishes);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(dishes);
    } // setupUi

    void retranslateUi(QWidget *dishes)
    {
        dishes->setWindowTitle(QApplication::translate("dishes", "Form", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("dishes", "\350\217\234\350\202\264", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("dishes", "\344\270\273\351\243\237", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("dishes", "\351\245\256\346\226\231", 0));
    } // retranslateUi

};

namespace Ui {
    class dishes: public Ui_dishes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISHES_H
