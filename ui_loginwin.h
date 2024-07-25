/********************************************************************************
** Form generated from reading UI file 'loginwin.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIN_H
#define UI_LOGINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <keyui.h>

QT_BEGIN_NAMESPACE

class Ui_loginWin
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    KeyUI *widget;

    void setupUi(QMainWindow *loginWin)
    {
        if (loginWin->objectName().isEmpty())
            loginWin->setObjectName(QStringLiteral("loginWin"));
        loginWin->resize(800, 480);
        loginWin->setStyleSheet(QLatin1String("QMainWindow\n"
"{\n"
"background-image: url(:/images/buckg.jpg);\n"
"\n"
"}\n"
""));
        centralwidget = new QWidget(loginWin);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, -20, 331, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 160, 101, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 160, 171, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(12);
        lineEdit->setFont(font2);
        lineEdit->setMaxLength(2);
        lineEdit->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 260, 101, 51));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 250, 171, 61));
        lineEdit_2->setFont(font2);
        lineEdit_2->setMaxLength(2);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 360, 131, 61));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"    border-radius: 15px; \n"
"    background-color: rgb(0, 82, 198); \n"
"    color: rgb(255, 255, 255); \n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: lightcoral;\n"
"}"));
        widget = new KeyUI(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(380, 150, 401, 311));
        loginWin->setCentralWidget(centralwidget);

        retranslateUi(loginWin);

        QMetaObject::connectSlotsByName(loginWin);
    } // setupUi

    void retranslateUi(QMainWindow *loginWin)
    {
        loginWin->setWindowTitle(QApplication::translate("loginWin", "loginWin", 0));
        label->setText(QApplication::translate("loginWin", "\345\235\244\345\235\244\345\244\247\346\216\222\346\241\243\350\207\252\345\212\251\347\202\271\350\217\234\347\263\273\347\273\237", 0));
        label_2->setText(QApplication::translate("loginWin", "\345\260\261\351\244\220\346\241\214\345\217\267", 0));
        label_3->setText(QApplication::translate("loginWin", "\345\260\261\351\244\220\344\272\272\346\225\260", 0));
        pushButton->setText(QApplication::translate("loginWin", "\347\241\256\350\256\244\345\260\261\351\244\220", 0));
    } // retranslateUi

};

namespace Ui {
    class loginWin: public Ui_loginWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIN_H
