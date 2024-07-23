#include "dishes.h"
#include "ui_dishes.h"

dishes::dishes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dishes)
{
    ui->setupUi(this);
    // 设置每个 menu 组件的图片和其他属性
    // tab1的6个组件
    ui->widget->setStyle(0,":/images/cai1.jpg", "香煎精鱼", "8");
    ui->widget_2->setStyle(0, ":/images/cai2.jpg", "香菜凤仁鸡", "25");
    ui->widget_3->setStyle(0,":/images/cai3.png", "虾头蒸乌鱼", "38");
    ui->widget_4->setStyle(0, ":/images/cai4.png", "白切鸡", "48");
    ui->widget_5->setStyle(0, ":/images/cai5.png", "水煮菜心", "26");
    ui->widget_6->setStyle(0, ":/images/cai6.png", "麻婆豆腐", "30");
    //tab2,主食类
    ui->widget_7->setStyle(0,":/images/fang1.jpg", "油饼", "2");
    ui->widget_8->setStyle(0,":/images/fang2.jpg", "米饭", "3");
    ui->widget_9->setStyle(0,":/images/fang3.jpg", "馒头", "3");
    ui->widget_10->setStyle(0,":/images/fang4.jpg", "面条", "5");
    //tab3，饮料类
    ui->widget_11->setStyle(0,":/images/yin1.jpg", "可乐", "3");
    ui->widget_12->setStyle(0,":/images/yin2.jpg", "雪碧", "3");
    ui->widget_13->setStyle(0,":/images/yin3.jpg", "茶", "3");



}

dishes::~dishes()
{
    delete ui;
}
