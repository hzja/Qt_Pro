#include "mainwindow.h"
#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

    //修改两句代码，使得登录注册界面得以打开
    login w;
    w.show();

    return a.exec();
}
