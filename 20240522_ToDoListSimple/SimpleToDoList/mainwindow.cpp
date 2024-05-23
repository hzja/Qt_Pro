#include "mainwindow.h"
#include "ui_mainwindow.h"
// 这段代码有问题！一定要详细调试！！！！！啊啊啊啊啊啊啊啊啊！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！

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


void MainWindow::on_ActionToDoListItemAdd_triggered()
{
    QListWidgetItem *NewItem = new QListWidgetItem();
    NewItem -> setText("新增加的项");
    NewItem -> setCheckState(Qt::Unchecked);
    NewItem -> setFlags(Qt::ItemIsSelectable | Qt::ItemIsDragEnabled | Qt::ItemIsDropEnabled | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate	);
    ui -> ToDoListWidget -> addItem(NewItem);
}

void MainWindow::on_ActionToDoListItemInsert_triggered()
{
    QListWidgetItem *AddItem = new QListWidgetItem();
    AddItem -> setText("插入的项");
    AddItem -> setCheckState(Qt::Unchecked);
    AddItem -> setFlags(Qt::ItemIsSelectable | Qt::ItemIsDragEnabled | Qt::ItemIsDropEnabled | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate	);
    int CurrentItemRow = ui -> ToDoListWidget -> currentRow();
    ui -> ToDoListWidget -> insertItem(CurrentItemRow, AddItem);
}


void MainWindow::on_ActionToDoListItemDelete_triggered()
{
    int DelItemRow = ui -> ToDoListWidget -> currentRow();
    QListWidgetItem *DelItem = ui -> ToDoListWidget -> takeItem(DelItemRow);
    delete DelItem;
}

void MainWindow::on_ActionToDoListItemEdit_triggered()
{
    QListWidgetItem *EditItem = ui -> ToDoListWidget -> currentItem();
    EditItem -> setCheckState(Qt::Checked);
    EditItem -> setFlags(Qt::ItemIsSelectable | Qt::ItemIsDragEnabled | Qt::ItemIsDropEnabled | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate | Qt::ItemIsEditable);
}


void MainWindow::on_ActionToDoListClear_triggered()
{
    ui -> ToDoListWidget -> clear();
}

void MainWindow::on_ActionToDoListItemNotDone_triggered()
{
        QListWidgetItem *ToDoListItem = ui -> ToDoListWidget -> currentItem();
        bool ToDoListItemisSelected = ToDoListItem -> isSelected();
        int ToDoListItemCurrentRow = ui -> ToDoListWidget -> currentRow();
        if (ToDoListItemisSelected){
            QListWidgetItem *ItemNotDone = ui -> ToDoListWidget -> takeItem(ToDoListItemCurrentRow);
            ui -> NotDoneListWidget -> addItem(ItemNotDone);
    }
}

void MainWindow::on_ActionToDoListItemDone_triggered()
{
    QListWidgetItem *ToDoListItem = ui -> ToDoListWidget -> currentItem();
    bool ToDoListItemisSelected = ToDoListItem -> isSelected();
    int ToDoListItemCurrentRow = ui -> ToDoListWidget -> currentRow();
    if (ToDoListItemisSelected){
        QListWidgetItem *ItemDone = ui -> ToDoListWidget -> takeItem(ToDoListItemCurrentRow);
        ui -> DoneListWidget -> addItem(ItemDone);

    }
}

void MainWindow::on_NotDoneListItemEditBtn_clicked()
{
    QListWidgetItem *EditItem = ui -> NotDoneListWidget -> currentItem();
    EditItem -> setCheckState(Qt::Checked);
    EditItem -> setFlags(Qt::ItemIsSelectable | Qt::ItemIsDragEnabled | Qt::ItemIsDropEnabled | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsAutoTristate | Qt::ItemIsEditable);
}



void MainWindow::on_NotDoneListDoneBtn_clicked()
{
    QListWidgetItem *NotDoneListItem = ui -> NotDoneListWidget -> currentItem();
    bool  NotDoneListItemisSelected = NotDoneListItem -> isSelected();
    int NotDoneListItemCurrentRow = ui -> NotDoneListWidget -> currentRow();
    if (NotDoneListItemisSelected){
        QListWidgetItem *ItemDone = ui -> NotDoneListWidget -> takeItem(NotDoneListItemCurrentRow);
        ui -> DoneListWidget -> addItem(ItemDone);
    }
}

void MainWindow::on_NotDoneListItemDelBtn_clicked()
{
    int DelItemRow = ui -> NotDoneListWidget -> currentRow();
    QListWidgetItem *DelItem = ui -> NotDoneListWidget -> takeItem(DelItemRow);
    delete DelItem;
}

void MainWindow::on_NotDoneListClrBtn_clicked()
{
    ui -> NotDoneListWidget -> clear();
}

void MainWindow::on_NotDoneListItemToDoBtn_clicked()
{
    QListWidgetItem *NotDoneListItem = ui -> NotDoneListWidget -> currentItem();
    bool  NotDoneListItemisSelected = NotDoneListItem -> isSelected();
    int NotDoneListItemCurrentRow = ui -> NotDoneListWidget -> currentRow();
    if (NotDoneListItemisSelected){
        QListWidgetItem *ItemToDo = ui -> NotDoneListWidget -> takeItem(NotDoneListItemCurrentRow);
        ui -> ToDoListWidget -> addItem(ItemToDo);
    }
}

void MainWindow::on_DoneListItemDelBtn_clicked()
{
    int DelItemRow = ui -> DoneListWidget -> currentRow();
    QListWidgetItem *DelItem = ui -> DoneListWidget -> takeItem(DelItemRow);
    delete DelItem;
}

void MainWindow::on_DoneListClrBtn_clicked()
{
    ui -> DoneListWidget -> clear();
}

void MainWindow::on_DoneListNotDoneBtn_clicked()
{
    QListWidgetItem *DoneListItem = ui -> DoneListWidget -> currentItem();
    bool  DoneListItemIsSelected = DoneListItem -> isSelected();
    int DoneListItemCurrentRow = ui -> NotDoneListWidget -> currentRow();
    if (DoneListItemIsSelected){
        QListWidgetItem *ItemNotDone = ui -> DoneListWidget -> takeItem(DoneListItemCurrentRow);
        ui -> NotDoneListWidget -> addItem(ItemNotDone);
    }
}
