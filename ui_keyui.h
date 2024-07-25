/********************************************************************************
** Form generated from reading UI file 'keyui.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYUI_H
#define UI_KEYUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include <mypushbutton.h>

QT_BEGIN_NAMESPACE

class Ui_KeyUI
{
public:
    mypushbutton *pushButton_1;
    mypushbutton *pushButton_2;
    mypushbutton *pushButton_3;
    mypushbutton *pushButton_4;
    mypushbutton *pushButton_5;
    mypushbutton *pushButton_6;
    mypushbutton *pushButton_7;
    mypushbutton *pushButton_8;
    mypushbutton *pushButton_9;
    mypushbutton *pushButton_0;
    mypushbutton *pushButton_10;

    void setupUi(QWidget *KeyUI)
    {
        if (KeyUI->objectName().isEmpty())
            KeyUI->setObjectName(QStringLiteral("KeyUI"));
        KeyUI->resize(409, 243);
        pushButton_1 = new mypushbutton(KeyUI);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(50, 20, 91, 41));
        pushButton_1->setFocusPolicy(Qt::NoFocus);
        pushButton_2 = new mypushbutton(KeyUI);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 20, 91, 41));
        pushButton_2->setFocusPolicy(Qt::NoFocus);
        pushButton_3 = new mypushbutton(KeyUI);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 20, 91, 41));
        pushButton_3->setFocusPolicy(Qt::NoFocus);
        pushButton_4 = new mypushbutton(KeyUI);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(50, 80, 91, 41));
        pushButton_4->setFocusPolicy(Qt::NoFocus);
        pushButton_5 = new mypushbutton(KeyUI);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(170, 80, 91, 41));
        pushButton_5->setFocusPolicy(Qt::NoFocus);
        pushButton_6 = new mypushbutton(KeyUI);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(280, 80, 91, 41));
        pushButton_6->setFocusPolicy(Qt::NoFocus);
        pushButton_7 = new mypushbutton(KeyUI);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(50, 130, 91, 41));
        pushButton_7->setFocusPolicy(Qt::NoFocus);
        pushButton_8 = new mypushbutton(KeyUI);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(170, 130, 91, 41));
        pushButton_8->setFocusPolicy(Qt::NoFocus);
        pushButton_9 = new mypushbutton(KeyUI);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(280, 130, 91, 41));
        pushButton_9->setFocusPolicy(Qt::NoFocus);
        pushButton_0 = new mypushbutton(KeyUI);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(170, 190, 91, 41));
        pushButton_0->setFocusPolicy(Qt::NoFocus);
        pushButton_10 = new mypushbutton(KeyUI);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(280, 190, 91, 41));
        pushButton_10->setFocusPolicy(Qt::NoFocus);

        retranslateUi(KeyUI);

        QMetaObject::connectSlotsByName(KeyUI);
    } // setupUi

    void retranslateUi(QWidget *KeyUI)
    {
        KeyUI->setWindowTitle(QApplication::translate("KeyUI", "Form", 0));
        pushButton_1->setText(QApplication::translate("KeyUI", "1", 0));
        pushButton_2->setText(QApplication::translate("KeyUI", "2", 0));
        pushButton_3->setText(QApplication::translate("KeyUI", "3", 0));
        pushButton_4->setText(QApplication::translate("KeyUI", "4", 0));
        pushButton_5->setText(QApplication::translate("KeyUI", "5", 0));
        pushButton_6->setText(QApplication::translate("KeyUI", "6", 0));
        pushButton_7->setText(QApplication::translate("KeyUI", "7", 0));
        pushButton_8->setText(QApplication::translate("KeyUI", "8", 0));
        pushButton_9->setText(QApplication::translate("KeyUI", "9", 0));
        pushButton_0->setText(QApplication::translate("KeyUI", "0", 0));
        pushButton_10->setText(QApplication::translate("KeyUI", "del", 0));
    } // retranslateUi

};

namespace Ui {
    class KeyUI: public Ui_KeyUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYUI_H
