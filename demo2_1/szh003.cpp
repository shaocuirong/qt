#include "szh003.h"
#include "ui_szh003.h"

szh003::szh003(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::szh003)
{
    ui->setupUi(this);
    
    // 设置窗口无边框样式
    this->setWindowFlags(Qt::FramelessWindowHint);
}

szh003::~szh003()
{
    delete ui;
}

void szh003::on_pushButton_2_clicked()
{
    // 退出按钮点击事件
    this->close();
}