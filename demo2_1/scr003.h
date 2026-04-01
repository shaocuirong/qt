#ifndef SCR003_H
#define SCR003_H

#include <QDialog>

namespace Ui {
class scr003;
}

class scr003 : public QDialog
{
    Q_OBJECT

public:
    explicit scr003(QWidget *parent = nullptr);
    ~scr003();

private slots:
    void on_pushButton_2_clicked(); // 退出按钮

private:
    Ui::scr003 *ui;
};

#endif // SCR003_H