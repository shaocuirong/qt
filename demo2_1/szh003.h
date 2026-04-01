#ifndef SZH003_H
#define SZH003_H

#include <QDialog>

namespace Ui {
class szh003;
}

class szh003 : public QDialog
{
    Q_OBJECT

public:
    explicit szh003(QWidget *parent = nullptr);
    ~szh003();

private slots:
    void on_pushButton_2_clicked(); // 退出按钮

private:
    Ui::szh003 *ui;
};

#endif // SZH003_H