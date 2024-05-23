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


void MainWindow::on_ActionListInt_triggered()
{
    QListWidgetItem *AItem;
    QStringList ListIntStringList = {
        "学习python语言","学习Qt的Epub文件","学习Solidity的Epub文件"
    };
    bool ListWidgetItemEditableStatus = ui -> ListWidgetItemEditable -> isChecked();
    ui -> ListWidgetBox -> clear();
    for (int i=0; i < ListIntStringList.size(); i++){
        AItem = new QListWidgetItem();
        AItem -> setText(ListIntStringList.at(i));
        AItem -> setCheckState(Qt::Unchecked);
        if(ListWidgetItemEditableStatus){
            AItem -> setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable | Qt::ItemIsDragEnabled | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
        }else{
            AItem -> setFlags(Qt::ItemIsSelectable | Qt::ItemIsDragEnabled | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
        }
        ui -> ListWidgetBox -> addItem(AItem);
    }
}

void MainWindow::on_ActionListClr_triggered()
{
    ui -> ListWidgetBox -> clear();
}


void MainWindow::on_ActionItemIns_triggered()
{
    QListWidgetItem *NewInsItem = new QListWidgetItem();
    NewInsItem -> setText("新插入的项");
    NewInsItem -> setCheckState(Qt::Unchecked);
    bool NewInsItemEditableStatus = ui -> ListWidgetItemEditable -> isChecked();
    if (NewInsItemEditableStatus){
        NewInsItem -> setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable | Qt::ItemIsDragEnabled | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
    }else{
        NewInsItem -> setFlags(Qt::ItemIsSelectable | Qt::ItemIsDragEnabled | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
    }
    int ItemCurrentRow = ui -> ListWidgetBox -> currentRow();
    ui -> ListWidgetBox -> insertItem(ItemCurrentRow, NewInsItem);
}

void MainWindow::on_ActionItemAdd_triggered()
{
    QListWidgetItem *NewAddItem = new QListWidgetItem();
    NewAddItem -> setText("新添加的项");
    NewAddItem -> setCheckState(Qt::Unchecked);
    bool NewAddItemEditableStatus = ui -> ListWidgetItemEditable -> isChecked();
    if (NewAddItemEditableStatus){
        NewAddItem -> setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable | Qt::ItemIsDragEnabled | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
    }else{
        NewAddItem -> setFlags(Qt::ItemIsSelectable | Qt::ItemIsDragEnabled | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
    }
    ui -> ListWidgetBox -> addItem(NewAddItem);
}

void MainWindow::on_ActionItemDel_triggered()
{
    int CurrentItem = ui -> ListWidgetBox -> currentRow();
    QListWidgetItem *DelItem = ui -> ListWidgetBox -> takeItem(CurrentItem);
    delete DelItem;
}

void MainWindow::on_ActionItemEdit_triggered()
{
    QListWidgetItem *EditItem = ui -> ListWidgetBox -> currentItem();
    EditItem -> setCheckState(Qt::Checked);
    EditItem -> setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable | Qt::ItemIsDragEnabled | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
}
