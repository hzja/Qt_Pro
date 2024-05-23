#ifndef USAGE_FOR_TOOL_H
#define USAGE_FOR_TOOL_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class usage_for_tool; }
QT_END_NAMESPACE

class usage_for_tool : public QWidget
{
    Q_OBJECT

public:
    usage_for_tool(QWidget *parent = nullptr);
    ~usage_for_tool();

private:
    Ui::usage_for_tool *ui;
};
#endif // USAGE_FOR_TOOL_H
