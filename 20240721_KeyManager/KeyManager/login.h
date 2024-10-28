#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

signals:
    //设置登录成功信号，使登录成功后的用户名得以传递;
    void loginSuccess(const QString &username);

private slots:
    void on_btLogin_clicked();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
