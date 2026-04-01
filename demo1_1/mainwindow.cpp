// 在文件最顶部，就在 #include "..." 之前添加这一行
#define WIN32_LEAN_AND_MEAN

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <windows.h> // 现在即使包含也不会引入 rpcndr.h 中的问题定义
#include <QPainter>
#include <QTimer>
#include <QRandomGenerator>
#include <algorithm>
#include <cmath>


// ================= 构造函数 =================
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , if_black(false)
    , timer(nullptr)
    , particles(QList<Particle>())
{
    ui->setupUi(this);

    // 设置窗口标题
    // this->setWindowTitle("愉快的小程序 + 电量检测");

    // 初始化进度条
    ui->progressBar->setRange(0, 100);
    ui->progressBar->setValue(0);

    // 初始化定时器（粒子动画）
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateParticles);
}

// ================= 析构函数 =================
MainWindow::~MainWindow()
{
    delete ui;
}

// ================= 黑屏按钮 =================
void MainWindow::on_pushButton_clicked()
{
    if (if_black)
    {
        // 退出黑屏
        this->showNormal();
        this->setStyleSheet("");
        this->setCursor(Qt::ArrowCursor);

        timer->stop();
        particles.clear();

        if_black = false;
    }
    else
    {
        // 进入黑屏
        this->showFullScreen();

        // 不设置背景色，而是通过paintEvent绘制
        this->setStyleSheet("");

        // 创建初始粒子
        particles.clear();
        createFirework();

        timer->start(30); // 启动粒子动画

        if_black = true;
    }
}

// ================= 电量检测 =================
void MainWindow::on_pushButton_2_clicked()
{
    SYSTEM_POWER_STATUS sps;
    GetSystemPowerStatus(&sps);

    int batteryPercent = sps.BatteryLifePercent;

    ui->progressBar->setValue(batteryPercent);

    // 进度条颜色变化（加分点）
    if (batteryPercent < 20)
    {
        ui->progressBar->setStyleSheet(
            "QProgressBar::chunk { background-color: red; }");
    }
    else if (batteryPercent < 50)
    {
        ui->progressBar->setStyleSheet(
            "QProgressBar::chunk { background-color: orange; }");
    }
    else
    {
        ui->progressBar->setStyleSheet(
            "QProgressBar::chunk { background-color: green; }");
    }
}

// ================= 创建烟花 =================
void MainWindow::createFirework()
{
    // 随机选择一个位置创建烟花
    int x = QRandomGenerator::global()->bounded(width());
    int y = QRandomGenerator::global()->bounded(height() / 2); // 只在屏幕上方部分产生烟花

    // 也可以选择固定位置如屏幕中央
    // QPoint center(width() / 2, height() / 2);

    QPoint center(x, y);

    for (int i = 0; i < 100; i++) // 增加粒子数量到100个
    {
        Particle p;
        p.pos = center;

        double angle = QRandomGenerator::global()->bounded(360) * M_PI / 180.0;
        double speed = QRandomGenerator::global()->bounded(3, 8); // 增加速度范围

        p.velocity = QPointF(speed * cos(angle), speed * sin(angle));

        // 生成明亮的颜色
        int r = QRandomGenerator::global()->bounded(100, 256);
        int g = QRandomGenerator::global()->bounded(100, 256);
        int b = QRandomGenerator::global()->bounded(100, 256);
        p.color = QColor(r, g, b);

        p.life = QRandomGenerator::global()->bounded(60, 120); // 随机生命值

        particles.append(p);
    }
}

// ================= 更新粒子 =================
void MainWindow::updateParticles()
{
    if (!if_black) return;

    // 更新粒子状态
    for (int i = particles.size() - 1; i >= 0; i--)
    {
        particles[i].pos += particles[i].velocity;
        particles[i].life--;

        // 添加重力效果使粒子向下运动
        particles[i].velocity.setY(particles[i].velocity.y() + 0.05);

        // 添加轻微的阻力
        particles[i].velocity *= 0.98;

        // 如果粒子生命值结束或超出屏幕底部，移除粒子
        if (particles[i].life <= 0 || particles[i].pos.y() > height()) {
            particles.removeAt(i);
        }
    }

    // 随机触发新的烟花爆炸
    if (QRandomGenerator::global()->bounded(100) < 5) { // 5% 概率触发新烟花
        createFirework();
    }

    // 强制重绘
    update();
}

// ================= 绘制 =================
void MainWindow::paintEvent(QPaintEvent *event)
{
    // 无论是否黑屏，都要正确处理绘制
    QPainter painter(this);

    // 如果是黑屏模式，绘制黑色背景
    if (if_black) {
        painter.fillRect(rect(), QColor(0, 0, 0)); // 黑色背景
    } else {
        // 非黑屏模式下，先调用父类绘制
        QMainWindow::paintEvent(event);
        return; // 非黑屏模式不绘制粒子
    }

    painter.setRenderHint(QPainter::Antialiasing);

    // 使用索引方式遍历，避免容器分离警告
    for (int i = 0; i < particles.size(); ++i)
    {
        const Particle& p = particles[i];
        painter.setBrush(p.color);
        painter.setPen(Qt::NoPen);

        // 根据生命值调整粒子大小，使其逐渐变小
        int size = std::max(1, static_cast<int>(p.life / 10.0));
        painter.drawEllipse(p.pos, size, size);
    }
}




void MainWindow::on_pushButton_3_clicked()
{
    pStu -> name = "小明";
    pStu -> age = 15;
    pStu -> score = 92.5f;
    pStu -> say();
}


void MainWindow::on_pushButton_4_clicked()
{
    show_menu();
    employee etmp0(10001,"Jack" ,"com",true,80,10,1);
    employee etmp1(10002,"Kate" ,"man",false,81,11,1);
    employee etmp2(10003,"szh"  ,"sec",false,82,12,2);
    e[0]=etmp0;
    e[1]=etmp1;
    e[2]=etmp2;
    print_list(e, 3);
}

