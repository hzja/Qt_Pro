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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *ActionToDoListItemAdd;
    QAction *ActionToDoListItemInsert;
    QAction *ActionToDoListItemDelete;
    QAction *ActionToDoListItemEdit;
    QAction *ActionToDoListClear;
    QAction *ActionToDoListItemNotDone;
    QAction *ActionToDoListItemDone;
    QWidget *centralwidget;
    QTabWidget *TabWidget;
    QWidget *ToDoListTab;
    QToolButton *ToDoListItemAddBtn;
    QToolButton *ToDoListItemDelBtn;
    QToolButton *ToDoListItemEditBtn;
    QToolButton *ToDoListItemInsBtn;
    QToolButton *ToDoListClrBtn;
    QListWidget *ToDoListWidget;
    QToolButton *ToDoListItemDoneBtn;
    QToolButton *ToDoListItemNotDoneBtn;
    QLabel *ToDoListLabel;
    QWidget *NotDoneListTab;
    QToolButton *NotDoneListDoneBtn;
    QToolButton *NotDoneListItemEditBtn;
    QToolButton *NotDoneListClrBtn;
    QToolButton *NotDoneListItemToDoBtn;
    QToolButton *NotDoneListItemDelBtn;
    QListWidget *NotDoneListWidget;
    QLabel *NotDoneListLabel;
    QWidget *DoneListTab;
    QToolButton *DoneListNotDoneBtn;
    QListWidget *DoneListWidget;
    QToolButton *DoneListClrBtn;
    QToolButton *DoneListItemDelBtn;
    QLabel *DoneListLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(586, 361);
        ActionToDoListItemAdd = new QAction(MainWindow);
        ActionToDoListItemAdd->setObjectName(QString::fromUtf8("ActionToDoListItemAdd"));
        ActionToDoListItemAdd->setCheckable(true);
        ActionToDoListItemInsert = new QAction(MainWindow);
        ActionToDoListItemInsert->setObjectName(QString::fromUtf8("ActionToDoListItemInsert"));
        ActionToDoListItemInsert->setCheckable(true);
        ActionToDoListItemDelete = new QAction(MainWindow);
        ActionToDoListItemDelete->setObjectName(QString::fromUtf8("ActionToDoListItemDelete"));
        ActionToDoListItemDelete->setCheckable(true);
        ActionToDoListItemEdit = new QAction(MainWindow);
        ActionToDoListItemEdit->setObjectName(QString::fromUtf8("ActionToDoListItemEdit"));
        ActionToDoListItemEdit->setCheckable(true);
        ActionToDoListClear = new QAction(MainWindow);
        ActionToDoListClear->setObjectName(QString::fromUtf8("ActionToDoListClear"));
        ActionToDoListClear->setCheckable(true);
        ActionToDoListItemNotDone = new QAction(MainWindow);
        ActionToDoListItemNotDone->setObjectName(QString::fromUtf8("ActionToDoListItemNotDone"));
        ActionToDoListItemNotDone->setCheckable(true);
        ActionToDoListItemDone = new QAction(MainWindow);
        ActionToDoListItemDone->setObjectName(QString::fromUtf8("ActionToDoListItemDone"));
        ActionToDoListItemDone->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        TabWidget = new QTabWidget(centralwidget);
        TabWidget->setObjectName(QString::fromUtf8("TabWidget"));
        TabWidget->setGeometry(QRect(30, 20, 481, 281));
        ToDoListTab = new QWidget();
        ToDoListTab->setObjectName(QString::fromUtf8("ToDoListTab"));
        ToDoListItemAddBtn = new QToolButton(ToDoListTab);
        ToDoListItemAddBtn->setObjectName(QString::fromUtf8("ToDoListItemAddBtn"));
        ToDoListItemAddBtn->setGeometry(QRect(20, 30, 51, 21));
        ToDoListItemDelBtn = new QToolButton(ToDoListTab);
        ToDoListItemDelBtn->setObjectName(QString::fromUtf8("ToDoListItemDelBtn"));
        ToDoListItemDelBtn->setGeometry(QRect(20, 110, 51, 21));
        ToDoListItemEditBtn = new QToolButton(ToDoListTab);
        ToDoListItemEditBtn->setObjectName(QString::fromUtf8("ToDoListItemEditBtn"));
        ToDoListItemEditBtn->setGeometry(QRect(20, 150, 51, 21));
        ToDoListItemInsBtn = new QToolButton(ToDoListTab);
        ToDoListItemInsBtn->setObjectName(QString::fromUtf8("ToDoListItemInsBtn"));
        ToDoListItemInsBtn->setGeometry(QRect(20, 70, 51, 21));
        ToDoListClrBtn = new QToolButton(ToDoListTab);
        ToDoListClrBtn->setObjectName(QString::fromUtf8("ToDoListClrBtn"));
        ToDoListClrBtn->setGeometry(QRect(20, 190, 51, 21));
        ToDoListWidget = new QListWidget(ToDoListTab);
        ToDoListWidget->setObjectName(QString::fromUtf8("ToDoListWidget"));
        ToDoListWidget->setGeometry(QRect(70, 30, 391, 211));
        ToDoListItemDoneBtn = new QToolButton(ToDoListTab);
        ToDoListItemDoneBtn->setObjectName(QString::fromUtf8("ToDoListItemDoneBtn"));
        ToDoListItemDoneBtn->setGeometry(QRect(400, 10, 61, 21));
        ToDoListItemNotDoneBtn = new QToolButton(ToDoListTab);
        ToDoListItemNotDoneBtn->setObjectName(QString::fromUtf8("ToDoListItemNotDoneBtn"));
        ToDoListItemNotDoneBtn->setGeometry(QRect(330, 10, 51, 21));
        ToDoListLabel = new QLabel(ToDoListTab);
        ToDoListLabel->setObjectName(QString::fromUtf8("ToDoListLabel"));
        ToDoListLabel->setGeometry(QRect(90, 10, 131, 16));
        TabWidget->addTab(ToDoListTab, QString());
        TabWidget->setTabText(TabWidget->indexOf(ToDoListTab), QString::fromUtf8("\344\273\212\346\227\245\345\276\205\345\212\236\344\272\213\351\241\271"));
        NotDoneListTab = new QWidget();
        NotDoneListTab->setObjectName(QString::fromUtf8("NotDoneListTab"));
        NotDoneListDoneBtn = new QToolButton(NotDoneListTab);
        NotDoneListDoneBtn->setObjectName(QString::fromUtf8("NotDoneListDoneBtn"));
        NotDoneListDoneBtn->setGeometry(QRect(400, 10, 51, 21));
        NotDoneListItemEditBtn = new QToolButton(NotDoneListTab);
        NotDoneListItemEditBtn->setObjectName(QString::fromUtf8("NotDoneListItemEditBtn"));
        NotDoneListItemEditBtn->setGeometry(QRect(10, 40, 51, 21));
        NotDoneListClrBtn = new QToolButton(NotDoneListTab);
        NotDoneListClrBtn->setObjectName(QString::fromUtf8("NotDoneListClrBtn"));
        NotDoneListClrBtn->setGeometry(QRect(10, 200, 51, 21));
        NotDoneListItemToDoBtn = new QToolButton(NotDoneListTab);
        NotDoneListItemToDoBtn->setObjectName(QString::fromUtf8("NotDoneListItemToDoBtn"));
        NotDoneListItemToDoBtn->setGeometry(QRect(340, 10, 51, 21));
        NotDoneListItemDelBtn = new QToolButton(NotDoneListTab);
        NotDoneListItemDelBtn->setObjectName(QString::fromUtf8("NotDoneListItemDelBtn"));
        NotDoneListItemDelBtn->setGeometry(QRect(10, 120, 51, 21));
        NotDoneListWidget = new QListWidget(NotDoneListTab);
        NotDoneListWidget->setObjectName(QString::fromUtf8("NotDoneListWidget"));
        NotDoneListWidget->setGeometry(QRect(60, 30, 391, 211));
        NotDoneListLabel = new QLabel(NotDoneListTab);
        NotDoneListLabel->setObjectName(QString::fromUtf8("NotDoneListLabel"));
        NotDoneListLabel->setGeometry(QRect(80, 10, 101, 16));
        TabWidget->addTab(NotDoneListTab, QString());
        TabWidget->setTabText(TabWidget->indexOf(NotDoneListTab), QString::fromUtf8("\346\234\252\345\256\214\346\210\220\344\272\213\351\241\271"));
        DoneListTab = new QWidget();
        DoneListTab->setObjectName(QString::fromUtf8("DoneListTab"));
        DoneListNotDoneBtn = new QToolButton(DoneListTab);
        DoneListNotDoneBtn->setObjectName(QString::fromUtf8("DoneListNotDoneBtn"));
        DoneListNotDoneBtn->setGeometry(QRect(410, 10, 41, 21));
        DoneListWidget = new QListWidget(DoneListTab);
        DoneListWidget->setObjectName(QString::fromUtf8("DoneListWidget"));
        DoneListWidget->setGeometry(QRect(70, 30, 391, 211));
        DoneListClrBtn = new QToolButton(DoneListTab);
        DoneListClrBtn->setObjectName(QString::fromUtf8("DoneListClrBtn"));
        DoneListClrBtn->setGeometry(QRect(20, 190, 51, 21));
        DoneListItemDelBtn = new QToolButton(DoneListTab);
        DoneListItemDelBtn->setObjectName(QString::fromUtf8("DoneListItemDelBtn"));
        DoneListItemDelBtn->setGeometry(QRect(20, 60, 51, 21));
        DoneListLabel = new QLabel(DoneListTab);
        DoneListLabel->setObjectName(QString::fromUtf8("DoneListLabel"));
        DoneListLabel->setGeometry(QRect(90, 10, 71, 16));
        TabWidget->addTab(DoneListTab, QString());
        TabWidget->setTabText(TabWidget->indexOf(DoneListTab), QString::fromUtf8("\345\267\262\345\256\214\346\210\220\344\272\213\351\241\271"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 586, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(ToDoListClrBtn, SIGNAL(clicked()), ActionToDoListClear, SLOT(trigger()));
        QObject::connect(ToDoListItemAddBtn, SIGNAL(clicked()), ActionToDoListItemAdd, SLOT(trigger()));
        QObject::connect(ToDoListItemInsBtn, SIGNAL(clicked()), ActionToDoListItemInsert, SLOT(trigger()));
        QObject::connect(ToDoListItemDelBtn, SIGNAL(clicked()), ActionToDoListItemDelete, SLOT(trigger()));
        QObject::connect(ToDoListItemEditBtn, SIGNAL(clicked()), ActionToDoListItemEdit, SLOT(trigger()));
        QObject::connect(ToDoListItemNotDoneBtn, SIGNAL(clicked()), ActionToDoListItemNotDone, SLOT(trigger()));
        QObject::connect(ToDoListItemDoneBtn, SIGNAL(clicked()), ActionToDoListItemDone, SLOT(trigger()));

        TabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ActionToDoListItemAdd->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\345\276\205\345\212\236\344\272\213\351\241\271", nullptr));
        ActionToDoListItemInsert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\345\276\205\345\212\236\344\272\213\351\241\271", nullptr));
        ActionToDoListItemDelete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\276\205\345\212\236\344\272\213\351\241\271", nullptr));
        ActionToDoListItemEdit->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\345\276\205\345\212\236\344\272\213\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        ActionToDoListItemEdit->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\345\276\205\345\212\236\344\272\213\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
        ActionToDoListClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\276\205\345\212\236\344\272\213\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        ActionToDoListClear->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\276\205\345\212\236\344\272\213\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
        ActionToDoListItemNotDone->setText(QCoreApplication::translate("MainWindow", "\345\276\205\345\212\236\344\272\213\351\241\271\346\234\252\345\256\214\346\210\220", nullptr));
#if QT_CONFIG(tooltip)
        ActionToDoListItemNotDone->setToolTip(QCoreApplication::translate("MainWindow", "\345\276\205\345\212\236\344\272\213\351\241\271\346\234\252\345\256\214\346\210\220", nullptr));
#endif // QT_CONFIG(tooltip)
        ActionToDoListItemDone->setText(QCoreApplication::translate("MainWindow", "\345\276\205\345\212\236\344\272\213\351\241\271\345\267\262\345\256\214\346\210\220", nullptr));
#if QT_CONFIG(tooltip)
        ActionToDoListItemDone->setToolTip(QCoreApplication::translate("MainWindow", "\345\276\205\345\212\236\344\272\213\351\241\271\345\267\262\345\256\214\346\210\220", nullptr));
#endif // QT_CONFIG(tooltip)
        ToDoListItemAddBtn->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
        ToDoListItemDelBtn->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\241\271", nullptr));
        ToDoListItemEditBtn->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\351\241\271", nullptr));
        ToDoListItemInsBtn->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
        ToDoListClrBtn->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\210\227\350\241\250", nullptr));
        ToDoListItemDoneBtn->setText(QCoreApplication::translate("MainWindow", "\345\267\262\345\256\214\346\210\220", nullptr));
        ToDoListItemNotDoneBtn->setText(QCoreApplication::translate("MainWindow", "\346\234\252\345\256\214\346\210\220", nullptr));
        ToDoListLabel->setText(QCoreApplication::translate("MainWindow", "\345\276\205\345\212\236\344\272\213\351\241\271\345\210\227\350\241\250", nullptr));
        NotDoneListDoneBtn->setText(QCoreApplication::translate("MainWindow", "\345\267\262\345\256\214\346\210\220", nullptr));
        NotDoneListItemEditBtn->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\351\241\271", nullptr));
        NotDoneListClrBtn->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\210\227\350\241\250", nullptr));
        NotDoneListItemToDoBtn->setText(QCoreApplication::translate("MainWindow", "\345\276\205\345\212\236", nullptr));
        NotDoneListItemDelBtn->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\241\271", nullptr));
        NotDoneListLabel->setText(QCoreApplication::translate("MainWindow", "\346\234\252\345\256\214\346\210\220\345\210\227\350\241\250", nullptr));
        DoneListNotDoneBtn->setText(QCoreApplication::translate("MainWindow", "\346\234\252\345\256\214\346\210\220", nullptr));
        DoneListClrBtn->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\210\227\350\241\250", nullptr));
        DoneListItemDelBtn->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\241\271", nullptr));
        DoneListLabel->setText(QCoreApplication::translate("MainWindow", "\345\267\262\345\256\214\346\210\220\345\210\227\350\241\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
