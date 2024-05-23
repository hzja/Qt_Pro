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
    void on_ActionToDoListItemAdd_triggered();

    void on_ActionToDoListItemInsert_triggered();

    void on_ActionToDoListItemDelete_triggered();

    void on_ActionToDoListItemEdit_triggered();

    void on_ActionToDoListClear_triggered();

    void on_ActionToDoListItemNotDone_triggered();

    void on_ActionToDoListItemDone_triggered();

    void on_NotDoneListItemEditBtn_clicked();

    void on_NotDoneListDoneBtn_clicked();

    void on_NotDoneListItemDelBtn_clicked();

    void on_NotDoneListClrBtn_clicked();

    void on_NotDoneListItemToDoBtn_clicked();

    void on_DoneListItemDelBtn_clicked();

    void on_DoneListClrBtn_clicked();

    void on_DoneListNotDoneBtn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
