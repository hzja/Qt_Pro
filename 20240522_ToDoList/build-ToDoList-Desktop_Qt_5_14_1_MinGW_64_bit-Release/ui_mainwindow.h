/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *ActionListInt;
    QAction *ActionListClr;
    QAction *ActionItemIns;
    QAction *ActionItemAdd;
    QAction *ActionItemDel;
    QAction *ActionSelectAll;
    QAction *ActionAllNotSelected;
    QAction *ActionReverseSelected;
    QAction *ActionQuit;
    QAction *ActionItemEdit;
    QWidget *centralwidget;
    QToolBox *toolBox;
    QWidget *ListWidget;
    QToolButton *ListWidgetListInt;
    QToolButton *ListWidgetListClr;
    QToolButton *ListWidgetItemIns;
    QToolButton *ListWidgetListAdd;
    QToolButton *ListWidgetItemDel;
    QToolButton *ListWidgetItemEdit;
    QWidget *TreeWidget;
    QToolButton *TreeWidgetListInt;
    QToolButton *TreeWidgetItemAdd;
    QToolButton *TreeWidgetItemDel;
    QToolButton *TreeWidgetListClr;
    QToolButton *TreeWidgetItemIns;
    QWidget *TableWidget;
    QToolButton *TableWidgetListInt;
    QToolButton *TableWidgetItemAdd;
    QToolButton *TableWidgetItemDel;
    QToolButton *TableWidgetListClr;
    QToolButton *TableWidgetItemIns;
    QTabWidget *TabWidget;
    QWidget *ListWidgetTab;
    QListWidget *ListWidgetBox;
    QCheckBox *ListWidgetItemEditable;
    QToolButton *SelectMenuToolButton;
    QToolButton *SelectAllItemsToolButton;
    QToolButton *SelectNoItemToolButton;
    QToolButton *SelectReverseCheckStateToolButton;
    QWidget *TreeWidgetTab;
    QWidget *TableWidgetTab;
    QToolBar *MainToolBar;
    QToolBar *SecondaryToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(764, 459);
        ActionListInt = new QAction(MainWindow);
        ActionListInt->setObjectName(QString::fromUtf8("ActionListInt"));
        ActionListInt->setCheckable(true);
        ActionListInt->setChecked(false);
        ActionListClr = new QAction(MainWindow);
        ActionListClr->setObjectName(QString::fromUtf8("ActionListClr"));
        ActionListClr->setCheckable(true);
        ActionItemIns = new QAction(MainWindow);
        ActionItemIns->setObjectName(QString::fromUtf8("ActionItemIns"));
        ActionItemIns->setCheckable(true);
        ActionItemAdd = new QAction(MainWindow);
        ActionItemAdd->setObjectName(QString::fromUtf8("ActionItemAdd"));
        ActionItemAdd->setCheckable(true);
        ActionItemDel = new QAction(MainWindow);
        ActionItemDel->setObjectName(QString::fromUtf8("ActionItemDel"));
        ActionItemDel->setCheckable(true);
        ActionSelectAll = new QAction(MainWindow);
        ActionSelectAll->setObjectName(QString::fromUtf8("ActionSelectAll"));
        ActionSelectAll->setCheckable(true);
        ActionAllNotSelected = new QAction(MainWindow);
        ActionAllNotSelected->setObjectName(QString::fromUtf8("ActionAllNotSelected"));
        ActionAllNotSelected->setCheckable(true);
        ActionReverseSelected = new QAction(MainWindow);
        ActionReverseSelected->setObjectName(QString::fromUtf8("ActionReverseSelected"));
        ActionReverseSelected->setCheckable(true);
        ActionQuit = new QAction(MainWindow);
        ActionQuit->setObjectName(QString::fromUtf8("ActionQuit"));
        ActionQuit->setCheckable(true);
        ActionItemEdit = new QAction(MainWindow);
        ActionItemEdit->setObjectName(QString::fromUtf8("ActionItemEdit"));
        ActionItemEdit->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        toolBox = new QToolBox(centralwidget);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(0, 0, 171, 411));
        ListWidget = new QWidget();
        ListWidget->setObjectName(QString::fromUtf8("ListWidget"));
        ListWidget->setGeometry(QRect(0, 0, 171, 333));
        ListWidgetListInt = new QToolButton(ListWidget);
        ListWidgetListInt->setObjectName(QString::fromUtf8("ListWidgetListInt"));
        ListWidgetListInt->setGeometry(QRect(10, 10, 141, 31));
        ListWidgetListClr = new QToolButton(ListWidget);
        ListWidgetListClr->setObjectName(QString::fromUtf8("ListWidgetListClr"));
        ListWidgetListClr->setGeometry(QRect(10, 60, 141, 31));
        ListWidgetItemIns = new QToolButton(ListWidget);
        ListWidgetItemIns->setObjectName(QString::fromUtf8("ListWidgetItemIns"));
        ListWidgetItemIns->setGeometry(QRect(10, 110, 141, 31));
        ListWidgetListAdd = new QToolButton(ListWidget);
        ListWidgetListAdd->setObjectName(QString::fromUtf8("ListWidgetListAdd"));
        ListWidgetListAdd->setGeometry(QRect(10, 160, 141, 31));
        ListWidgetItemDel = new QToolButton(ListWidget);
        ListWidgetItemDel->setObjectName(QString::fromUtf8("ListWidgetItemDel"));
        ListWidgetItemDel->setGeometry(QRect(10, 260, 141, 31));
        ListWidgetItemEdit = new QToolButton(ListWidget);
        ListWidgetItemEdit->setObjectName(QString::fromUtf8("ListWidgetItemEdit"));
        ListWidgetItemEdit->setGeometry(QRect(10, 210, 141, 31));
        toolBox->addItem(ListWidget, QString::fromUtf8("QListWidget\346\223\215\344\275\234"));
        TreeWidget = new QWidget();
        TreeWidget->setObjectName(QString::fromUtf8("TreeWidget"));
        TreeWidget->setGeometry(QRect(0, 0, 171, 333));
        TreeWidgetListInt = new QToolButton(TreeWidget);
        TreeWidgetListInt->setObjectName(QString::fromUtf8("TreeWidgetListInt"));
        TreeWidgetListInt->setGeometry(QRect(20, 10, 141, 31));
        TreeWidgetItemAdd = new QToolButton(TreeWidget);
        TreeWidgetItemAdd->setObjectName(QString::fromUtf8("TreeWidgetItemAdd"));
        TreeWidgetItemAdd->setGeometry(QRect(20, 210, 141, 31));
        TreeWidgetItemDel = new QToolButton(TreeWidget);
        TreeWidgetItemDel->setObjectName(QString::fromUtf8("TreeWidgetItemDel"));
        TreeWidgetItemDel->setGeometry(QRect(20, 280, 141, 31));
        TreeWidgetListClr = new QToolButton(TreeWidget);
        TreeWidgetListClr->setObjectName(QString::fromUtf8("TreeWidgetListClr"));
        TreeWidgetListClr->setGeometry(QRect(20, 70, 141, 31));
        TreeWidgetItemIns = new QToolButton(TreeWidget);
        TreeWidgetItemIns->setObjectName(QString::fromUtf8("TreeWidgetItemIns"));
        TreeWidgetItemIns->setGeometry(QRect(20, 140, 141, 31));
        toolBox->addItem(TreeWidget, QString::fromUtf8("QTreeWidget\346\223\215\344\275\234"));
        TableWidget = new QWidget();
        TableWidget->setObjectName(QString::fromUtf8("TableWidget"));
        TableWidget->setGeometry(QRect(0, 0, 171, 333));
        TableWidgetListInt = new QToolButton(TableWidget);
        TableWidgetListInt->setObjectName(QString::fromUtf8("TableWidgetListInt"));
        TableWidgetListInt->setGeometry(QRect(20, 10, 141, 31));
        TableWidgetItemAdd = new QToolButton(TableWidget);
        TableWidgetItemAdd->setObjectName(QString::fromUtf8("TableWidgetItemAdd"));
        TableWidgetItemAdd->setGeometry(QRect(20, 210, 141, 31));
        TableWidgetItemDel = new QToolButton(TableWidget);
        TableWidgetItemDel->setObjectName(QString::fromUtf8("TableWidgetItemDel"));
        TableWidgetItemDel->setGeometry(QRect(20, 280, 141, 31));
        TableWidgetListClr = new QToolButton(TableWidget);
        TableWidgetListClr->setObjectName(QString::fromUtf8("TableWidgetListClr"));
        TableWidgetListClr->setGeometry(QRect(20, 70, 141, 31));
        TableWidgetItemIns = new QToolButton(TableWidget);
        TableWidgetItemIns->setObjectName(QString::fromUtf8("TableWidgetItemIns"));
        TableWidgetItemIns->setGeometry(QRect(20, 140, 141, 31));
        toolBox->addItem(TableWidget, QString::fromUtf8("QTableWidget\346\223\215\344\275\234"));
        TabWidget = new QTabWidget(centralwidget);
        TabWidget->setObjectName(QString::fromUtf8("TabWidget"));
        TabWidget->setGeometry(QRect(170, 0, 591, 411));
        ListWidgetTab = new QWidget();
        ListWidgetTab->setObjectName(QString::fromUtf8("ListWidgetTab"));
        ListWidgetBox = new QListWidget(ListWidgetTab);
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(ListWidgetBox);
        __qlistwidgetitem->setCheckState(Qt::Unchecked);
        __qlistwidgetitem->setFont(font);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsTristate);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(ListWidgetBox);
        __qlistwidgetitem1->setCheckState(Qt::Unchecked);
        __qlistwidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsTristate);
        ListWidgetBox->setObjectName(QString::fromUtf8("ListWidgetBox"));
        ListWidgetBox->setGeometry(QRect(10, 40, 531, 321));
        ListWidgetItemEditable = new QCheckBox(ListWidgetTab);
        ListWidgetItemEditable->setObjectName(QString::fromUtf8("ListWidgetItemEditable"));
        ListWidgetItemEditable->setGeometry(QRect(10, 10, 111, 19));
        SelectMenuToolButton = new QToolButton(ListWidgetTab);
        SelectMenuToolButton->setObjectName(QString::fromUtf8("SelectMenuToolButton"));
        SelectMenuToolButton->setGeometry(QRect(110, 10, 81, 21));
        SelectAllItemsToolButton = new QToolButton(ListWidgetTab);
        SelectAllItemsToolButton->setObjectName(QString::fromUtf8("SelectAllItemsToolButton"));
        SelectAllItemsToolButton->setGeometry(QRect(210, 10, 71, 21));
        SelectNoItemToolButton = new QToolButton(ListWidgetTab);
        SelectNoItemToolButton->setObjectName(QString::fromUtf8("SelectNoItemToolButton"));
        SelectNoItemToolButton->setGeometry(QRect(320, 10, 71, 21));
        SelectReverseCheckStateToolButton = new QToolButton(ListWidgetTab);
        SelectReverseCheckStateToolButton->setObjectName(QString::fromUtf8("SelectReverseCheckStateToolButton"));
        SelectReverseCheckStateToolButton->setGeometry(QRect(430, 10, 71, 21));
        TabWidget->addTab(ListWidgetTab, QString());
        TreeWidgetTab = new QWidget();
        TreeWidgetTab->setObjectName(QString::fromUtf8("TreeWidgetTab"));
        TabWidget->addTab(TreeWidgetTab, QString());
        TableWidgetTab = new QWidget();
        TableWidgetTab->setObjectName(QString::fromUtf8("TableWidgetTab"));
        TabWidget->addTab(TableWidgetTab, QString());
        MainWindow->setCentralWidget(centralwidget);
        MainToolBar = new QToolBar(MainWindow);
        MainToolBar->setObjectName(QString::fromUtf8("MainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, MainToolBar);
        SecondaryToolBar = new QToolBar(MainWindow);
        SecondaryToolBar->setObjectName(QString::fromUtf8("SecondaryToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, SecondaryToolBar);
        MainWindow->insertToolBarBreak(SecondaryToolBar);

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(0);
        TabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ActionListInt->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
#if QT_CONFIG(shortcut)
        ActionListInt->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        ActionListClr->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
#if QT_CONFIG(shortcut)
        ActionListClr->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        ActionItemIns->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
#if QT_CONFIG(shortcut)
        ActionItemIns->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        ActionItemAdd->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
#if QT_CONFIG(shortcut)
        ActionItemAdd->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        ActionItemDel->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
#if QT_CONFIG(shortcut)
        ActionItemDel->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        ActionSelectAll->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        ActionSelectAll->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        ActionSelectAll->setShortcut(QCoreApplication::translate("MainWindow", "Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
        ActionAllNotSelected->setText(QCoreApplication::translate("MainWindow", "\345\205\250\344\270\215\351\200\211", nullptr));
#if QT_CONFIG(shortcut)
        ActionAllNotSelected->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        ActionReverseSelected->setText(QCoreApplication::translate("MainWindow", "\345\217\215\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        ActionReverseSelected->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\215\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        ActionReverseSelected->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        ActionQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        ActionQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        ActionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        ActionItemEdit->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        ActionItemEdit->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        ActionItemEdit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(accessibility)
        ListWidget->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        ListWidgetListInt->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
        ListWidgetListClr->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250 ", nullptr));
        ListWidgetItemIns->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
        ListWidgetListAdd->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
        ListWidgetItemDel->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
        ListWidgetItemEdit->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\351\241\271", nullptr));
        toolBox->setItemText(toolBox->indexOf(ListWidget), QCoreApplication::translate("MainWindow", "QListWidget\346\223\215\344\275\234", nullptr));
        TreeWidgetListInt->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
        TreeWidgetItemAdd->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
        TreeWidgetItemDel->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
        TreeWidgetListClr->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250 ", nullptr));
        TreeWidgetItemIns->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
        toolBox->setItemText(toolBox->indexOf(TreeWidget), QCoreApplication::translate("MainWindow", "QTreeWidget\346\223\215\344\275\234", nullptr));
        TableWidgetListInt->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
        TableWidgetItemAdd->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
        TableWidgetItemDel->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", nullptr));
        TableWidgetListClr->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250 ", nullptr));
        TableWidgetItemIns->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
        toolBox->setItemText(toolBox->indexOf(TableWidget), QCoreApplication::translate("MainWindow", "QTableWidget\346\223\215\344\275\234", nullptr));

        const bool __sortingEnabled = ListWidgetBox->isSortingEnabled();
        ListWidgetBox->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = ListWidgetBox->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "\351\230\205\350\257\273C++\347\232\204Qt\347\232\204epub\346\226\207\344\273\266", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = ListWidgetBox->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "\351\230\205\350\257\273Solidity\347\232\204Epub\346\226\207\344\273\266", nullptr));
        ListWidgetBox->setSortingEnabled(__sortingEnabled);

        ListWidgetItemEditable->setText(QCoreApplication::translate("MainWindow", "\346\230\257\345\220\246\345\217\257\347\274\226\350\276\221", nullptr));
        SelectMenuToolButton->setText(QCoreApplication::translate("MainWindow", "\344\270\213\346\213\211\351\200\211\351\241\271", nullptr));
        SelectAllItemsToolButton->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        SelectNoItemToolButton->setText(QCoreApplication::translate("MainWindow", "\345\205\250\344\270\215\351\200\211", nullptr));
        SelectReverseCheckStateToolButton->setText(QCoreApplication::translate("MainWindow", "\345\217\215\351\200\211", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(ListWidgetTab), QCoreApplication::translate("MainWindow", "QListWidget", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(TreeWidgetTab), QCoreApplication::translate("MainWindow", "QTreeWidget", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(TableWidgetTab), QCoreApplication::translate("MainWindow", "QTableWidget", nullptr));
        MainToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        SecondaryToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
