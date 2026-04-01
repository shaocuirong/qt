#include "LoginDialog.h"
#include "ui_LoginDialog.h"
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog),
    loginSuccess(false)
{
    ui->setupUi(this);
    setWindowTitle("用户登录");
    
    // 设置对话框模态
    setModal(true);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

QString LoginDialog::getUsername() const
{
    return ui->userName->toPlainText();
}

QString LoginDialog::getPassword() const
{
    return ui->passWard->toPlainText();
}

bool LoginDialog::isLoginSuccessful() const
{
    return loginSuccess;
}

void LoginDialog::on_loginButton_clicked()
{
    QString username = ui->userName->toPlainText();
    QString password = ui->passWard->toPlainText();
    
    // 简单的验证逻辑（实际应用中应使用更安全的验证机制）
    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "登录失败", "用户名和密码不能为空！");
        return;
    }
    
    // 根据项目要求：用户名为自己的姓名全拼，密码为自己的学号
    // 使用实际的姓名拼音和学号
    if (username == "scr" && password == "259400128") {  // 实际信息：scr为姓名拼音首字母，259400128为学号
        loginSuccess = true;
        QMessageBox::information(this, "登录成功", "欢迎回来，" + username + "！");
        accept(); // 关闭对话框并返回Accepted
    } else {
        loginSuccess = false;
        QMessageBox::warning(this, "登录失败", "用户名或密码错误！\n用户名：姓名全拼，密码：学号");
        ui->passWard->clear();
        ui->userName->setFocus();
    }
}

void LoginDialog::on_cancelButton_clicked()
{
    loginSuccess = false;
    reject(); // 关闭对话框并返回Rejected
}
