#include "keyui.h"
#include "ui_keyui.h"

KeyUI::KeyUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::KeyUI)
{
    ui->setupUi(this);


}

KeyUI::~KeyUI()
{
    delete ui;
}


