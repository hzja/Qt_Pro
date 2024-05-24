#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMenu"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setActionsForButton();
    createSelectionPopMenu();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ActionListInt_triggered()
{
    //初始化列表
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
    //清空列表
    ui -> ListWidgetBox -> clear();
}


void MainWindow::on_ActionItemIns_triggered()
{
    //在当前选项的上方插入新的项
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
    //在最后增添选项
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
    //删除当前的选项
    int CurrentItem = ui -> ListWidgetBox -> currentRow();
    QListWidgetItem *DelItem = ui -> ListWidgetBox -> takeItem(CurrentItem);
    delete DelItem;
}

void MainWindow::on_ActionItemEdit_triggered()
{
    //编辑当前的选项
    QListWidgetItem *EditItem = ui -> ListWidgetBox -> currentItem();
    EditItem -> setCheckState(Qt::Checked);
    EditItem -> setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable | Qt::ItemIsDragEnabled | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
}

void MainWindow::on_ActionSelectAll_triggered()
{
    //全选当前的选项
    QListWidgetItem *ListWidgetItem = new QListWidgetItem();
    int ListWidgetCount = ui -> ListWidgetBox -> count();
    for (int i=0; i<ListWidgetCount;i++){
        ListWidgetItem = ui -> ListWidgetBox -> item(i);
        ListWidgetItem ->setCheckState(Qt::Checked);
    }
}

void MainWindow::on_ActionAllNotSelected_triggered()
{
    //全不选当前的选项
    QListWidgetItem *ListWidgetItem = new QListWidgetItem();
    int ListWidgetCount = ui -> ListWidgetBox -> count();
    for (int i=0; i<ListWidgetCount;i++){
        ListWidgetItem = ui -> ListWidgetBox -> item(i);
        ListWidgetItem ->setCheckState(Qt::Unchecked);
    }
}

void MainWindow::on_ActionReverseSelected_triggered()
{
    //对当前的选项反选
    QListWidgetItem *ListWidgetItem = new QListWidgetItem();
    ListWidgetItem = ui -> ListWidgetBox -> currentItem();
    Qt::CheckState CurrentListWidgetItemCheckState = ListWidgetItem -> checkState();
    if (CurrentListWidgetItemCheckState == Qt::Checked){
        ListWidgetItem -> setCheckState(Qt::Unchecked);
    }else{
        ListWidgetItem -> setCheckState(Qt::Checked);
    }
}

void MainWindow::on_ActionQuit_triggered()
{
    //退出程序;
    this -> close();
}

void MainWindow::setActionsForButton()
{
    //为按钮添加相应的动作
    ui -> ListWidgetListInt -> setDefaultAction(ui -> ActionListInt);
    ui -> ListWidgetListClr -> setDefaultAction(ui -> ActionListClr);
    ui -> ListWidgetListAdd -> setDefaultAction(ui -> ActionItemAdd);
    ui -> ListWidgetItemIns -> setDefaultAction(ui -> ActionItemIns);
    ui -> ListWidgetItemDel -> setDefaultAction(ui -> ActionItemDel);
    ui -> ListWidgetItemEdit -> setDefaultAction(ui -> ActionItemEdit);

    ui -> SelectAllItemsToolButton -> setDefaultAction(ui -> ActionSelectAll);
    ui -> SelectNoItemToolButton -> setDefaultAction(ui -> ActionAllNotSelected);
    ui -> SelectReverseCheckStateToolButton -> setDefaultAction(ui -> ActionReverseSelected);
}

void MainWindow::createSelectionPopMenu()
{
    //添加“下拉选项”按钮的下拉菜单
    QMenu *SelectionMenu = new QMenu(this);
    SelectionMenu -> addAction(ui -> ActionSelectAll);
    SelectionMenu -> addAction(ui -> ActionAllNotSelected);
    SelectionMenu -> addAction(ui -> ActionReverseSelected);
    ui -> SelectMenuToolButton -> setPopupMode(QToolButton::MenuButtonPopup);
    ui -> SelectMenuToolButton -> setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
    ui -> SelectMenuToolButton -> setMenu(SelectionMenu);

    //主工具栏添加相应的动作
    ui -> MainToolBar -> addAction(ui->ActionListInt);
    ui -> MainToolBar -> addAction(ui->ActionListClr);
    ui -> MainToolBar -> addAction(ui->ActionItemIns);
    ui -> MainToolBar -> addAction(ui->ActionItemAdd);
    ui -> MainToolBar -> addAction(ui->ActionItemDel);
    ui -> MainToolBar -> addAction(ui->ActionItemEdit);

    //次工具栏添加“选项”的下拉菜单和退出动作
    QToolButton *NewToolButton = new QToolButton();
    NewToolButton -> setText("选项");
    NewToolButton -> setPopupMode(QToolButton::InstantPopup);
    NewToolButton -> setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    NewToolButton -> setMenu(SelectionMenu);
    ui -> SecondaryToolBar -> addWidget(NewToolButton);
    ui -> SecondaryToolBar -> addSeparator();
    ui -> SecondaryToolBar -> addAction(ui -> ActionQuit);
}

void MainWindow::on_ListWidgetBox_customContextMenuRequested(const QPoint &pos)
{
    //这段代码无效，想办法改进。
    Q_UNUSED(pos);
    QMenu* menuList = new QMenu(this);
    menuList -> addAction(ui->ActionListInt);
    menuList -> addAction(ui->ActionListClr);
    menuList -> addAction(ui->ActionItemIns);
    menuList -> addAction(ui->ActionItemAdd);
    menuList -> addAction(ui->ActionItemDel);
    menuList -> addAction(ui->ActionItemEdit);
    menuList -> addSeparator();
    menuList -> addAction(ui -> ActionSelectAll);
    menuList -> addAction(ui -> ActionAllNotSelected);
    menuList -> addAction(ui -> ActionReverseSelected);
    menuList -> addSeparator();
    menuList -> addAction(ui -> ActionQuit);

    menuList -> exec(QCursor::pos());
    delete menuList;
}
