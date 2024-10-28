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
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QCheckBox *chkBoxHeaderV;
    QCheckBox *chkBoxRowColor;
    QPushButton *btnDelCurRow;
    QPushButton *pushButton_2;
    QPushButton *setTableHead;
    QPushButton *pushButton_8;
    QPushButton *btnReadToEdit;
    QRadioButton *rBtnSelectItem;
    QPushButton *btnInsertRow;
    QPushButton *pushButton_7;
    QRadioButton *rBtnSelectRow;
    QCheckBox *chkBoxHeaderH;
    QCheckBox *chkBoxTabEditable;
    QPushButton *btnAppendRow;
    QPushButton *btnIniTableData;
    QSpinBox *spinBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *FullScreenWin;
    QPushButton *NormWin;
    QPushButton *MaxWin;
    QPushButton *MinWin;
    QTableWidget *tableInfo;
    QPlainTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(795, 613);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 331, 481));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        chkBoxHeaderV = new QCheckBox(gridLayoutWidget);
        chkBoxHeaderV->setObjectName(QString::fromUtf8("chkBoxHeaderV"));

        gridLayout->addWidget(chkBoxHeaderV, 8, 1, 1, 1);

        chkBoxRowColor = new QCheckBox(gridLayoutWidget);
        chkBoxRowColor->setObjectName(QString::fromUtf8("chkBoxRowColor"));

        gridLayout->addWidget(chkBoxRowColor, 7, 1, 1, 1);

        btnDelCurRow = new QPushButton(gridLayoutWidget);
        btnDelCurRow->setObjectName(QString::fromUtf8("btnDelCurRow"));

        gridLayout->addWidget(btnDelCurRow, 4, 0, 1, 2);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        setTableHead = new QPushButton(gridLayoutWidget);
        setTableHead->setObjectName(QString::fromUtf8("setTableHead"));

        gridLayout->addWidget(setTableHead, 0, 0, 1, 2);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 5, 1, 1, 1);

        btnReadToEdit = new QPushButton(gridLayoutWidget);
        btnReadToEdit->setObjectName(QString::fromUtf8("btnReadToEdit"));

        gridLayout->addWidget(btnReadToEdit, 6, 0, 1, 2);

        rBtnSelectItem = new QRadioButton(gridLayoutWidget);
        rBtnSelectItem->setObjectName(QString::fromUtf8("rBtnSelectItem"));

        gridLayout->addWidget(rBtnSelectItem, 9, 0, 1, 1);

        btnInsertRow = new QPushButton(gridLayoutWidget);
        btnInsertRow->setObjectName(QString::fromUtf8("btnInsertRow"));

        gridLayout->addWidget(btnInsertRow, 3, 0, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 5, 0, 1, 1);

        rBtnSelectRow = new QRadioButton(gridLayoutWidget);
        rBtnSelectRow->setObjectName(QString::fromUtf8("rBtnSelectRow"));

        gridLayout->addWidget(rBtnSelectRow, 9, 1, 1, 1);

        chkBoxHeaderH = new QCheckBox(gridLayoutWidget);
        chkBoxHeaderH->setObjectName(QString::fromUtf8("chkBoxHeaderH"));

        gridLayout->addWidget(chkBoxHeaderH, 8, 0, 1, 1);

        chkBoxTabEditable = new QCheckBox(gridLayoutWidget);
        chkBoxTabEditable->setObjectName(QString::fromUtf8("chkBoxTabEditable"));

        gridLayout->addWidget(chkBoxTabEditable, 7, 0, 1, 1);

        btnAppendRow = new QPushButton(gridLayoutWidget);
        btnAppendRow->setObjectName(QString::fromUtf8("btnAppendRow"));

        gridLayout->addWidget(btnAppendRow, 3, 1, 1, 1);

        btnIniTableData = new QPushButton(gridLayoutWidget);
        btnIniTableData->setObjectName(QString::fromUtf8("btnIniTableData"));

        gridLayout->addWidget(btnIniTableData, 2, 0, 1, 2);

        spinBox = new QSpinBox(gridLayoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout->addWidget(spinBox, 1, 1, 1, 1);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 520, 331, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        FullScreenWin = new QPushButton(horizontalLayoutWidget);
        FullScreenWin->setObjectName(QString::fromUtf8("FullScreenWin"));

        horizontalLayout->addWidget(FullScreenWin);

        NormWin = new QPushButton(horizontalLayoutWidget);
        NormWin->setObjectName(QString::fromUtf8("NormWin"));

        horizontalLayout->addWidget(NormWin);

        MaxWin = new QPushButton(horizontalLayoutWidget);
        MaxWin->setObjectName(QString::fromUtf8("MaxWin"));

        horizontalLayout->addWidget(MaxWin);

        MinWin = new QPushButton(horizontalLayoutWidget);
        MinWin->setObjectName(QString::fromUtf8("MinWin"));

        horizontalLayout->addWidget(MinWin);

        tableInfo = new QTableWidget(centralwidget);
        tableInfo->setObjectName(QString::fromUtf8("tableInfo"));
        tableInfo->setGeometry(QRect(370, 20, 401, 431));
        sizePolicy.setHeightForWidth(tableInfo->sizePolicy().hasHeightForWidth());
        tableInfo->setSizePolicy(sizePolicy);
        textEdit = new QPlainTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(370, 460, 401, 101));
        textEdit->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 795, 22));
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        chkBoxHeaderV->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\210\227\350\241\250\345\244\264", nullptr));
        chkBoxRowColor->setText(QCoreApplication::translate("MainWindow", "\351\227\264\351\232\224\350\241\214\345\272\225\350\211\262", nullptr));
        btnDelCurRow->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\350\241\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\214\346\225\260", nullptr));
        setTableHead->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\250\345\244\264", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\350\260\203\350\212\202\345\210\227\345\256\275", nullptr));
        btnReadToEdit->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226\350\241\250\346\240\274\345\206\205\345\256\271\345\210\260\346\226\207\346\234\254", nullptr));
        rBtnSelectItem->setText(QCoreApplication::translate("MainWindow", "\350\241\214\351\200\211\346\213\251", nullptr));
        btnInsertRow->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\214", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\350\260\203\350\212\202\350\241\214\351\253\230", nullptr));
        rBtnSelectRow->setText(QCoreApplication::translate("MainWindow", "\345\215\225\345\205\203\346\240\274\351\200\211\346\213\251", nullptr));
        chkBoxHeaderH->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\350\241\214\350\241\250\345\244\264", nullptr));
        chkBoxTabEditable->setText(QCoreApplication::translate("MainWindow", "\350\241\250\346\240\274\345\217\257\347\274\226\350\276\221", nullptr));
        btnAppendRow->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\241\214", nullptr));
        btnIniTableData->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\350\241\250\346\240\274\346\225\260\346\215\256", nullptr));
        FullScreenWin->setText(QCoreApplication::translate("MainWindow", "\345\205\250\345\261\217", nullptr));
        NormWin->setText(QCoreApplication::translate("MainWindow", "\346\255\243\345\270\270\346\230\276\347\244\272", nullptr));
        MaxWin->setText(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\346\234\200\345\244\247\345\214\226", nullptr));
        MinWin->setText(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\346\234\200\345\260\217\345\214\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
