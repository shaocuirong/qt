#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>

//使用带参构造函数创建对象，其x,y为(10, 20)
XXXPoint m_point(0, 0);

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
// 声明我们要使用main.cpp中定义的全局变量

void MainWindow::on_pushButton_clicked()
{
    m_point.setX(m_point.getX()+1);
    m_point.setY(m_point.getY()+1);
    std::cout << "x = " << m_point.getX()  << ", y = " << m_point.getY() << std::endl;
}

