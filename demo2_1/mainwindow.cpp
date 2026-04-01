#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "LoginDialog.h"
#include "scr003.h"
#include <QMessageBox>
#include <QLabel>
#include <QMovie>
#include <QVBoxLayout>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , counter(0)
    , timer(nullptr)
{
    ui->setupUi(this);
    
    // 在主窗口启动时显示登录对话框
    LoginDialog loginDlg(this);
    if (loginDlg.exec() == QDialog::Accepted) {
        // 登录成功，显示主窗口
        this->setWindowTitle("实验3主界面 - 欢迎, " + loginDlg.getUsername());
    } else {
        // 登录失败或取消，关闭整个应用
        QMessageBox::information(this, "提示", "未登录或登录失败，程序将退出。");
        this->close();
    }
    
    // 加载GIF动图
    movie = new QMovie(":/images/zgws.gif"); // 使用资源文件中的动图
    ui->label->setMovie(movie);     // 在标签中添加动画
    movie->start();
    
    // 初始化计数器和定时器
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateCounter);
}

MainWindow::~MainWindow()
{
    if (timer->isActive()) {
        timer->stop();
    }
    delete movie;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // 弹出一个无边框的模态对话框显示姓名学号
    scr003 *dialog = new scr003(this);
    dialog->show(); // 使用show()而不是exec()，因为对话框已经是无边框的
}

void MainWindow::on_pushButton_2_clicked()
{
    // 开始输出数字递增效果
    if (!timer->isActive()) {
        counter = 0;
        timer->start(1000); // 每秒递增一次
        qDebug() << "上机任务1 - 数字递增效果开始";
    } else {
        timer->stop();
        qDebug() << "上机任务1 - 数字递增效果停止";
    }
}

void MainWindow::updateCounter()
{
    counter++;
    qDebug() << "计数器: " << counter;
    // 也可以在界面上显示计数
    ui->statusbar->showMessage(QString("计数: %1").arg(counter));
}

