#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMovie>
#include <QLabel>
#include <QTextStream>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_pushButton_clicked(); // 第一个按钮 - 弹出对话框
    void on_pushButton_2_clicked(); // 第二个按钮 - 输出数字递增效果
    void updateCounter(); // 更新计数器

private:
    Ui::MainWindow *ui;
    QMovie *movie;
    int counter;
    QTimer *timer;
};
#endif // MAINWINDOW_H
