#ifndef LOGINWIN_H
#define LOGINWIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class loginWin; }
QT_END_NAMESPACE

class loginWin : public QMainWindow
{
    Q_OBJECT

public:
    loginWin(QWidget *parent = nullptr);
    ~loginWin();

private:
    Ui::loginWin *ui;
};
#endif // LOGINWIN_H
