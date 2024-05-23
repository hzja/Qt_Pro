#include "usage_for_tool.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    usage_for_tool w;
    w.show();
    return a.exec();
}
