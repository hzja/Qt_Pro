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


void MainWindow::on_DecConvert_clicked()
{
    QString dec = ui -> DecimalNum -> text();
    int value = dec.toInt();
    QString bin = ui -> BinaryNum -> text();
    bin = bin.setNum(value,2);
    ui -> BinaryNum -> setText(bin);

    QString oct = ui -> OctalNum -> text();
    oct = oct.setNum(value,8);
    ui -> OctalNum -> setText(oct);

    QString hex = ui -> HexNum -> text();
    hex = hex.setNum(value,16);
    ui -> HexNum -> setText(hex);
}

void MainWindow::on_RefreshBtn_clicked()
{
    ui -> DecimalNum -> setText("0");
    ui -> BinaryNum -> setText("0");
    ui -> OctalNum -> setText("0");
    ui -> HexNum -> setText("0");
}

void MainWindow::on_BinConvert_clicked()
{
    QString bin = ui -> BinaryNum -> text();
    bool ok;
    int value = bin.toInt(&ok,2);

    QString dec = ui -> DecimalNum -> text();
    dec = dec.setNum(value,10);
    ui -> DecimalNum -> setText(dec);

    QString oct = ui -> OctalNum -> text();
    oct = oct.setNum(value,8);
    ui -> OctalNum -> setText(oct);

    QString hex = ui -> HexNum -> text();
    hex = hex.setNum(value,16);
    ui -> HexNum -> setText(hex);
}

void MainWindow::on_OctalConvert_clicked()
{
    QString oct = ui -> OctalNum -> text();
    bool ok;
    int value = oct.toInt(&ok,8);

    QString bin = ui -> BinaryNum -> text();
    bin = bin.setNum(value,2);
    ui -> BinaryNum -> setText(bin);

    QString dec = ui -> DecimalNum -> text();
    dec = dec.setNum(value,10);
    ui -> DecimalNum -> setText(dec);


    QString hex = ui -> HexNum -> text();
    hex = hex.setNum(value,16);
    ui -> HexNum -> setText(hex);
}

void MainWindow::on_HexConvert_clicked()
{
    QString hex = ui -> HexNum -> text();
    bool ok;
    int value = hex.toInt(&ok,16);

    QString bin = ui -> BinaryNum -> text();
    bin = bin.setNum(value,2);
    ui -> BinaryNum -> setText(bin);

    QString dec = ui -> DecimalNum -> text();
    dec = dec.setNum(value,10);
    ui -> DecimalNum -> setText(dec);


    QString oct = ui -> OctalNum -> text();
    oct = oct.setNum(value,8);
    ui -> OctalNum -> setText(oct);
}
