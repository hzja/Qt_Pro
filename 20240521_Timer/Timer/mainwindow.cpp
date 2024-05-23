#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    fTimer = new QTimer(this);
    fTimer -> stop();
    fTimer -> setInterval(1000);
    connect(fTimer,SIGNAL(timeout()),this,SLOT(on_timer_timeout()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_GetCurrentDateAndTime_clicked()
{
    QDateTime CurrentDateAndTime = QDateTime::currentDateTime();
    ui -> DateTimeEdit -> setDateTime(CurrentDateAndTime);
    ui -> EditDateAndTime -> setText(CurrentDateAndTime.toString("yyyy年MM月dd日 hh时mm分ss秒"));

    QDate CurrentDate = CurrentDateAndTime.date();
    ui -> DateEdit -> setDate(CurrentDate);
    ui -> Calendar -> setSelectedDate(CurrentDate);
    ui -> EditDate -> setText(CurrentDate.toString("yyyy年MM月dd日"));
    ui -> SelectedDateLineEdit -> setText(CurrentDate.toString("yyyy年MM月dd日"));

    QTime CurrentTime = CurrentDateAndTime.time();
    ui -> TimeEdit -> setTime(CurrentTime);
    ui -> EditTime -> setText(CurrentTime.toString("hh时mm分ss秒"));
}

void MainWindow::on_Calendar_selectionChanged()
{
    QDate SelectedDate = ui -> Calendar -> selectedDate();
    ui -> SelectedDateLineEdit -> setText(SelectedDate.toString("yyyy年MM月dd日"));
}

void MainWindow::on_timer_timeout()
{
    QTime CurrentTime = QTime::currentTime();
    ui -> HourLcdNum -> display(CurrentTime.hour());
    ui -> MinuteLcdNum -> display(CurrentTime.minute());
    ui -> SecondLcdNum -> display(CurrentTime.second());
    int val = ui -> TimerProgressBar -> value();
    val ++;
    if (val > 100){ val = 0; }
    ui -> TimerProgressBar -> setValue(val);
}

void MainWindow::on_TimerStartButton_clicked()
{
    fTimer -> start();
    fTimeCounter.start();
    ui -> TimerStartButton -> setEnabled(false);
    ui -> TimerStopButton -> setEnabled(true);
    ui -> SetTimePeriodButton -> setEnabled(false);
}

void MainWindow::on_TimerStopButton_clicked()
{
    fTimer -> stop();
    int tmMsec = fTimeCounter.elapsed();
    int ms = tmMsec%1000;
    int sec = tmMsec/1000;
    QString TimePass = QString("流逝时间：%1 秒，%2 毫秒").arg(QString::number(sec,10)).arg(QString::number(ms,10));
    ui -> TimePassLineEdit -> setText(TimePass);
    ui -> TimerStartButton -> setEnabled(true);
    ui -> TimerStopButton -> setEnabled(false);
    ui -> SetTimePeriodButton -> setEnabled(true);
}

void MainWindow::on_SetTimePeriodButton_clicked()
{
    QTime TimePeriod = ui -> TimePeriodEdit -> time();
    int TimePeriodMSec = TimePeriod.msec();
    fTimer -> setInterval(TimePeriodMSec);
}

void MainWindow::on_SetDateAndTime_clicked()
{
    QString EditedDateAndTimeString = ui -> EditDateAndTime -> text();
    QDateTime EditedDateAndTime = QDateTime::fromString(EditedDateAndTimeString,"yyyy年MM月dd日 hh时mm分ss秒");
    ui -> DateTimeEdit -> setDateTime(EditedDateAndTime);
    ui -> DateEdit -> setDate(EditedDateAndTime.date());
    ui -> Calendar -> setSelectedDate(EditedDateAndTime.date());
    ui -> EditDate -> setText(EditedDateAndTime.date().toString("yyyy年MM月dd日"));
    ui -> SelectedDateLineEdit -> setText(EditedDateAndTime.date().toString("yyyy年MM月dd日"));
    ui -> TimeEdit -> setTime(EditedDateAndTime.time());
    ui -> EditTime -> setText(EditedDateAndTime.time().toString("hh时mm分ss秒"));
}

void MainWindow::on_SetDate_clicked()
{
    QString EditedDateString = ui -> EditDate -> text();
    QDate EditedDate = QDate::fromString(EditedDateString,"yyyy年MM月dd日");

    ui -> DateTimeEdit -> setDate(EditedDate);
    QDateTime DateAndTime = ui -> DateTimeEdit -> dateTime();
    ui -> EditDateAndTime -> setText(DateAndTime.toString("yyyy年MM月dd日 hh时mm分ss秒"));

    ui -> DateEdit -> setDate(EditedDate);

    ui -> Calendar -> setSelectedDate(EditedDate);
    ui -> SelectedDateLineEdit -> setText(EditedDate.toString("yyyy年MM月dd日"));
}

void MainWindow::on_SetTime_clicked()
{
    QString EditedTimeString = ui -> EditTime -> text();
    QTime EditedTime = QTime::fromString(EditedTimeString, "hh时mm分ss秒");

    ui -> DateTimeEdit -> setTime(EditedTime);
    QDateTime DateAndTime = ui -> DateTimeEdit -> dateTime();
    ui -> EditDateAndTime -> setText(DateAndTime.toString("yyyy年MM月dd日 hh时mm分ss秒"));

    ui -> TimeEdit -> setTime(EditedTime);
}
