#ifndef KEYUI_H
#define KEYUI_H

#include <QWidget>

namespace Ui {
class KeyUI;
}

class KeyUI : public QWidget
{
    Q_OBJECT

public:
    explicit KeyUI(QWidget *parent = nullptr);
    ~KeyUI();



private:
    Ui::KeyUI *ui;
};

#endif // KEYUI_H
