/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QLabel *picture;
    QPushButton *addBt;
    QPushButton *subBt;
    QLabel *food_number;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *foodname;
    QLabel *money;

    void setupUi(QWidget *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QStringLiteral("menu"));
        menu->resize(146, 164);
        picture = new QLabel(menu);
        picture->setObjectName(QStringLiteral("picture"));
        picture->setGeometry(QRect(20, 10, 91, 71));
        picture->setStyleSheet(QStringLiteral("border-image: url(:/images/cai4.png);"));
        addBt = new QPushButton(menu);
        addBt->setObjectName(QStringLiteral("addBt"));
        addBt->setGeometry(QRect(10, 130, 31, 31));
        addBt->setFocusPolicy(Qt::NoFocus);
        addBt->setStyleSheet(QStringLiteral("border-image: url(:/images/add.png);"));
        subBt = new QPushButton(menu);
        subBt->setObjectName(QStringLiteral("subBt"));
        subBt->setGeometry(QRect(100, 130, 31, 31));
        subBt->setFocusPolicy(Qt::NoFocus);
        subBt->setStyleSheet(QStringLiteral("border-image: url(:/images/sub.png);"));
        food_number = new QLabel(menu);
        food_number->setObjectName(QStringLiteral("food_number"));
        food_number->setGeometry(QRect(50, 130, 41, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(10);
        food_number->setFont(font);
        food_number->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(menu);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 97, 141, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        foodname = new QLabel(layoutWidget);
        foodname->setObjectName(QStringLiteral("foodname"));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(7);
        foodname->setFont(font1);
        foodname->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(foodname);

        money = new QLabel(layoutWidget);
        money->setObjectName(QStringLiteral("money"));
        money->setFont(font1);
        money->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(money);


        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QWidget *menu)
    {
        menu->setWindowTitle(QApplication::translate("menu", "Form", 0));
        picture->setText(QString());
        addBt->setText(QString());
        subBt->setText(QString());
        food_number->setText(QApplication::translate("menu", "1", 0));
        foodname->setText(QApplication::translate("menu", "\346\262\271\351\245\274", 0));
        money->setText(QApplication::translate("menu", "5\345\205\203/\344\273\275", 0));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
