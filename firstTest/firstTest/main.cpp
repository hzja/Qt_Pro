#include "mainwindow.h"
#include <QApplication>
#include <QLabel>        //标签类文件
#include <QLineEdit>     //行编辑框类文件
#include <QPushButton>   //按钮类文件


int main(int argc, char *argv[])
{

    //创建应用程序对象，在QT中有且仅有一个
    QApplication a(argc, argv);

    //窗口对象
    MainWindow w;

    //显示窗口(窗口默认不显示，需要调用.show方法后显示)
    w.show();

    //让应用程序对象进入消息循环使程序能连续不断接收各种事件
    return a.exec();


}
