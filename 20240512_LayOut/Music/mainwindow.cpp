#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->BlueRadioButton,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    connect(ui->RedRadioButton,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    connect(ui->GreenRadioButton,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBox_clicked(bool checked)
{

}

void MainWindow::on_UnderLineCheckBox_clicked(bool checked)
{
    QFont font=ui->plainTextEdit-> font();
    font.setUnderline(checked);
    ui->plainTextEdit->setFont(font);
}

void MainWindow::on_BoldCheckBox_clicked(bool checked)
{
    QFont font=ui->plainTextEdit-> font();
    font.setBold(checked);
    ui->plainTextEdit->setFont(font);
}

void MainWindow::on_ItalicCheckBox_clicked(bool checked)
{
    QFont font=ui->plainTextEdit-> font();
    font.setItalic(checked);
    ui->plainTextEdit->setFont(font);
}

void MainWindow::setTextFontColor()
{
    QPalette plet = ui -> plainTextEdit -> palette();
    if (ui->BlueRadioButton->isChecked())
        plet.setColor(QPalette::Text,Qt::blue);
    else if (ui->RedRadioButton->isChecked())
        plet.setColor(QPalette::Text,Qt::red);
    else if (ui->GreenRadioButton->isChecked())
        plet.setColor(QPalette::Text,Qt::green);
    else
        plet.setColor(QPalette::Text,Qt::black);
    ui -> plainTextEdit -> setPalette(plet);
}
