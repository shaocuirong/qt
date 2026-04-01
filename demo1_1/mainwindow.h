#define WIN32_LEAN_AND_MEAN

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "student.h"
#include "head.h"

#include <QMainWindow>
#include <QTimer>
#include <QVector>
#include <QPoint>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

struct Particle
{
    QPointF pos;
    QPointF velocity;
    QColor color;
    int life;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void paintEvent(QPaintEvent *event); // 粒子绘制

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void updateParticles();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    //student 实例化
    Student *pStu = new Student;
    employee e[10];//创建一个员工对象数组

    bool if_black = false;

    QTimer *timer;
    QVector<Particle> particles;

    void createFirework();
};

#endif