#ifndef TOOL_H
#define TOOL_H

#include <QWidget>

class tool : public QWidget
{
    Q_OBJECT

public:
    tool(QWidget *parent = nullptr);
    ~tool();
};
#endif // TOOL_H
