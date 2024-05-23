#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QElapsedTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_GetCurrentDateAndTime_clicked();
    void on_Calendar_selectionChanged();
    void on_timer_timeout();

    void on_TimerStartButton_clicked();

    void on_TimerStopButton_clicked();

    void on_SetTimePeriodButton_clicked();

    void on_SetDateAndTime_clicked();

    void on_SetDate_clicked();

    void on_SetTime_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *fTimer;
    QElapsedTimer fTimeCounter;
};
#endif // MAINWINDOW_H
