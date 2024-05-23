#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Caculate_clicked()
{
    QString Method = ui -> CalculateMethod -> currentText();
    int value1 = ui -> FirstValue -> text().toInt();
    int value2 = ui -> SecondValue -> text().toInt();
    int value3;
    QString value4;
    if (Method == "+")
    {
        value3 = value1 + value2;
        ui -> Result -> setText(value4.setNum(value3));
    }else if (Method == "-")
    {
        value3 = value1 - value2;
        ui -> Result -> setText(value4.setNum(value3));
    }else if (Method == "x")
    {
        value3 = value1 * value2;
        ui -> Result -> setText(value4.setNum(value3));
    }else if (Method == "/")
    {
        value3 = value1 / value2;
        ui -> Result -> setText(value4.setNum(value3));
    }

}

void MainWindow::on_Refresh_clicked()
{
    ui -> FirstValue -> clear();
    ui -> SecondValue -> clear();
    ui -> Result -> clear();
}
