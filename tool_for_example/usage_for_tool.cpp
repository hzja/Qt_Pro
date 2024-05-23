#include "usage_for_tool.h"
#include "./ui_usage_for_tool.h"

usage_for_tool::usage_for_tool(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::usage_for_tool)
{
    ui->setupUi(this);
}

usage_for_tool::~usage_for_tool()
{
    delete ui;
}

