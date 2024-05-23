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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *DecConvert;
    QPushButton *BinConvert;
    QPushButton *OctalConvert;
    QLabel *label;
    QLineEdit *OctalNum;
    QLineEdit *BinaryNum;
    QPushButton *HexConvert;
    QLineEdit *DecimalNum;
    QLabel *label_5;
    QLineEdit *HexNum;
    QLabel *label_4;
    QPushButton *RefreshBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(558, 240);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 30, 441, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        DecConvert = new QPushButton(gridLayoutWidget);
        DecConvert->setObjectName(QString::fromUtf8("DecConvert"));

        gridLayout->addWidget(DecConvert, 0, 3, 1, 1);

        BinConvert = new QPushButton(gridLayoutWidget);
        BinConvert->setObjectName(QString::fromUtf8("BinConvert"));

        gridLayout->addWidget(BinConvert, 3, 3, 1, 1);

        OctalConvert = new QPushButton(gridLayoutWidget);
        OctalConvert->setObjectName(QString::fromUtf8("OctalConvert"));

        gridLayout->addWidget(OctalConvert, 4, 3, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        OctalNum = new QLineEdit(gridLayoutWidget);
        OctalNum->setObjectName(QString::fromUtf8("OctalNum"));

        gridLayout->addWidget(OctalNum, 4, 2, 1, 1);

        BinaryNum = new QLineEdit(gridLayoutWidget);
        BinaryNum->setObjectName(QString::fromUtf8("BinaryNum"));

        gridLayout->addWidget(BinaryNum, 3, 2, 1, 1);

        HexConvert = new QPushButton(gridLayoutWidget);
        HexConvert->setObjectName(QString::fromUtf8("HexConvert"));

        gridLayout->addWidget(HexConvert, 5, 3, 1, 1);

        DecimalNum = new QLineEdit(gridLayoutWidget);
        DecimalNum->setObjectName(QString::fromUtf8("DecimalNum"));

        gridLayout->addWidget(DecimalNum, 0, 2, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 1, 1, 1);

        HexNum = new QLineEdit(gridLayoutWidget);
        HexNum->setObjectName(QString::fromUtf8("HexNum"));

        gridLayout->addWidget(HexNum, 5, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 1, 1, 1);

        RefreshBtn = new QPushButton(gridLayoutWidget);
        RefreshBtn->setObjectName(QString::fromUtf8("RefreshBtn"));

        gridLayout->addWidget(RefreshBtn, 2, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 558, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\225\264\346\225\260\350\275\254\346\215\242\345\231\250", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\344\272\214\350\277\233\345\210\266\346\225\260\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\350\275\254\344\270\272", nullptr));
        DecConvert->setText(QCoreApplication::translate("MainWindow", "\350\275\254\346\215\242\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        BinConvert->setText(QCoreApplication::translate("MainWindow", "\350\275\254\346\215\242\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        OctalConvert->setText(QCoreApplication::translate("MainWindow", "\350\275\254\346\215\242\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\215\201\350\277\233\345\210\266\346\225\260\357\274\232", nullptr));
        HexConvert->setText(QCoreApplication::translate("MainWindow", "\350\275\254\346\215\242\345\205\266\344\273\226\350\277\233\345\210\266", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\205\253\350\277\233\345\210\266\346\225\260\357\274\232", nullptr));
        RefreshBtn->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
