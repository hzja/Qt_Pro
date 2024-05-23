#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->RedSlider,SIGNAL(valueChanged(int)),this,SLOT(on_RedSlider_valueChanged(int)));
    QObject::connect(ui->BlueSlider,SIGNAL(valueChanged(int)),this,SLOT(on_RedSlider_valueChanged(int)));
    QObject::connect(ui->GreenSlider,SIGNAL(valueChanged(int)),this,SLOT(on_RedSlider_valueChanged(int)));
    QObject::connect(ui->AlphaSlider,SIGNAL(valueChanged(int)),this,SLOT(on_RedSlider_valueChanged(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_RedSlider_valueChanged(int value)
{
    Q_UNUSED(value);

    QColor color;
    int red_num = ui -> RedSlider -> value();
    int green_num = ui -> GreenSlider -> value();
    int blue_num = ui -> BlueSlider -> value();
    int alpha_num = ui -> AlphaSlider -> value();
    color.setRgb(red_num, green_num, blue_num, alpha_num);

    QPalette TextEditPalette = ui -> TextEdit -> palette();
    TextEditPalette.setColor(QPalette::Base,color);
    ui -> TextEdit -> setPalette(TextEditPalette);
}

void MainWindow::on_Dial_valueChanged(int value)
{
    ui -> LcdDisplay -> display(value);
}

void MainWindow::on_BinRadioBtn_clicked(bool checked)
{
    if(checked){
        int result = ui -> Dial -> value();
        ui -> LcdDisplay -> setMode(QLCDNumber::Bin);
        ui -> LcdDisplay -> display(result);
     }
}

void MainWindow::on_OctRadioBtn_clicked(bool checked)
{
    if(checked){
        int result = ui -> Dial -> value();
        ui -> LcdDisplay -> setMode(QLCDNumber::Oct);
        ui -> LcdDisplay -> display(result);
    }
}



void MainWindow::on_DecRadioBtn_clicked(bool checked)
{
    if(checked){
        int result = ui -> Dial -> value();
        ui -> LcdDisplay -> setMode(QLCDNumber::Dec);
        ui -> LcdDisplay -> display(result);
    }
}

void MainWindow::on_HexRadioBtn_clicked(bool checked)
{
    if(checked){
        int result = ui -> Dial -> value();
        ui -> LcdDisplay -> setMode(QLCDNumber::Hex);
        ui -> LcdDisplay -> display(result);
    }
}
