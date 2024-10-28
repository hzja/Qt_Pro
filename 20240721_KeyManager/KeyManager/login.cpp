#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);

    //设置窗口标题
    this->setWindowTitle("登录");

    //设置背景图片
    QPalette LoginPalette = this -> palette();
    LoginPalette.setBrush(QPalette::Background,QBrush(QPixmap("./Resource/9ca1pgpT8CQ.jpg").scaled(this->size())));
    this -> setPalette(LoginPalette);

    //设置登录窗口图标
    this -> setWindowIcon(QIcon(QPixmap("./Resource/Login.png")));

    //设置密文登录
    ui -> lineEditPassword -> setEchoMode(QLineEdit::Password);

    //使用户名登录框获取焦点
    ui -> lineEditUser ->setFocus();
}

login::~login()
{
    delete ui;
}

void login::on_btLogin_clicked()
{
    if(ui->lineEditUser->text()=="hzj" && ui->lineEditPassword->text()=="647561")
    {
        //设置登录成功逻辑
        this -> close();
        MainWindow *mainWindow = new MainWindow;
        mainWindow -> show();

        //连接信号和槽，使用户名得以从登录界面发送到主界面接收
        connect(this,&login::loginSuccess, mainWindow,&MainWindow::loginSuc);
        //发送信号，使用户名得以从登录界面发送到主界面接收
        emit loginSuccess(ui->lineEditUser->text());
    }else{
        //设置登录失败逻辑
        QMessageBox::warning(this,tr("登录失败"),tr("用户名或密码错误，请重新登录"),QMessageBox::Ok);
        ui -> lineEditUser -> clear();
        ui -> lineEditPassword -> clear();
        ui -> lineEditUser -> setFocus();
    }
}
