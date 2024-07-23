#include "menu.h"
#include "ui_menu.h"
#include <QDebug>

menu::menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
    this->flag = false;
    food_count = 0;
}

menu::~menu()
{
    delete ui;
}

void menu::on_addBt_clicked()
{
    this->flag = true;
    this->food_count += 1;
    ui->food_number->setText(QString("%1").arg(food_count));
    emit addsignals();
}

void menu::on_subBt_clicked()
{
    if (food_count == 0) {
        flag = false;
        return;
    }
    this->food_count -= 1;
    ui->food_number->setText(QString("%1").arg(food_count));
    emit addsignals();
}

void menu::setFoodprice(const QString &value)
{
    foodprice = value;
}

QString menu::getFoodprice() const
{
    return foodprice;
}

void menu::setStyle(int number, QString img, QString foodname, QString money)
{
    // QPixmap只接受图片文件路径，而不是样式表
    QPixmap pixmap(img);

    // 如果图片加载失败，输出错误信息
    if (pixmap.isNull()) {
        qDebug() << "Failed to load image:" << img;
    }

    ui->picture->setScaledContents(true);  // 设置图片铺满标签
    ui->picture->setPixmap(pixmap.scaled(ui->picture->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));  // 按比例铺满

    ui->foodname->setText(foodname);
    ui->money->setText(money + "元/份");

    this->foodname = foodname;
    this->foodprice = money;
    this->food_number = number;
    // 设置 food_number 的显示值
        ui->food_number->setText(QString::number(number));

}

QString menu::get_foodname()
{
    return this->foodname;
}

int menu::food_num()
{
    return this->food_count;
}

QString menu::get_foodprice()
{
    return this->foodprice;
}

bool menu::isPitch_On()
{
    return this->flag;
}
