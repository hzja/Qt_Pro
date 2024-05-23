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
    void on_ActionListInt_triggered();

    void on_ActionListClr_triggered();

    void on_ActionItemIns_triggered();

    void on_ActionItemAdd_triggered();

    void on_ActionItemDel_triggered();

    void on_ActionItemEdit_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
