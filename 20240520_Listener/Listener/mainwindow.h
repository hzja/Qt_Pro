#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_RedSlider_valueChanged(int value);

    void on_Dial_valueChanged(int value);

    void on_BinRadioBtn_clicked(bool checked);

    void on_OctRadioBtn_clicked(bool checked);

    void on_DecRadioBtn_clicked(bool checked);

    void on_HexRadioBtn_clicked(bool checked);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
