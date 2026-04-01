#include "scr003.h"
#include "ui_scr003.h"

scr003::scr003(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::scr003)
{
    ui->setupUi(this);
    
    // 设置窗口无边框样式
    this->setWindowFlags(Qt::FramelessWindowHint);
}

scr003::~scr003()
{
    delete ui;
}

void scr003::on_pushButton_2_clicked()
{
    // 退出按钮点击事件
    this->close();
}