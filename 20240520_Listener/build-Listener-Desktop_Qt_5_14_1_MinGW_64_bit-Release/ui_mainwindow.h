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
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *ColorizerGroupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSlider *BlueSlider;
    QLabel *GreenNum;
    QSlider *GreenSlider;
    QLabel *RedNum;
    QLabel *BlueNum;
    QSlider *RedSlider;
    QLabel *AlphaNum;
    QSlider *AlphaSlider;
    QTextEdit *TextEdit;
    QGroupBox *DialAndLcdNumGroupBox;
    QDial *Dial;
    QLCDNumber *LcdDisplay;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QRadioButton *BinRadioBtn;
    QRadioButton *OctRadioBtn;
    QRadioButton *DecRadioBtn;
    QRadioButton *HexRadioBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(363, 333);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ColorizerGroupBox = new QGroupBox(centralwidget);
        ColorizerGroupBox->setObjectName(QString::fromUtf8("ColorizerGroupBox"));
        ColorizerGroupBox->setGeometry(QRect(20, 20, 321, 131));
        gridLayoutWidget = new QWidget(ColorizerGroupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 191, 92));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        BlueSlider = new QSlider(gridLayoutWidget);
        BlueSlider->setObjectName(QString::fromUtf8("BlueSlider"));
        BlueSlider->setMaximum(255);
        BlueSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(BlueSlider, 2, 1, 1, 1);

        GreenNum = new QLabel(gridLayoutWidget);
        GreenNum->setObjectName(QString::fromUtf8("GreenNum"));

        gridLayout->addWidget(GreenNum, 1, 0, 1, 1);

        GreenSlider = new QSlider(gridLayoutWidget);
        GreenSlider->setObjectName(QString::fromUtf8("GreenSlider"));
        GreenSlider->setMaximum(255);
        GreenSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(GreenSlider, 1, 1, 1, 1);

        RedNum = new QLabel(gridLayoutWidget);
        RedNum->setObjectName(QString::fromUtf8("RedNum"));

        gridLayout->addWidget(RedNum, 0, 0, 1, 1);

        BlueNum = new QLabel(gridLayoutWidget);
        BlueNum->setObjectName(QString::fromUtf8("BlueNum"));

        gridLayout->addWidget(BlueNum, 2, 0, 1, 1);

        RedSlider = new QSlider(gridLayoutWidget);
        RedSlider->setObjectName(QString::fromUtf8("RedSlider"));
        RedSlider->setMaximum(255);
        RedSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(RedSlider, 0, 1, 1, 1);

        AlphaNum = new QLabel(gridLayoutWidget);
        AlphaNum->setObjectName(QString::fromUtf8("AlphaNum"));

        gridLayout->addWidget(AlphaNum, 3, 0, 1, 1);

        AlphaSlider = new QSlider(gridLayoutWidget);
        AlphaSlider->setObjectName(QString::fromUtf8("AlphaSlider"));
        AlphaSlider->setMaximum(255);
        AlphaSlider->setValue(100);
        AlphaSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(AlphaSlider, 3, 1, 1, 1);

        TextEdit = new QTextEdit(ColorizerGroupBox);
        TextEdit->setObjectName(QString::fromUtf8("TextEdit"));
        TextEdit->setGeometry(QRect(210, 20, 101, 91));
        DialAndLcdNumGroupBox = new QGroupBox(centralwidget);
        DialAndLcdNumGroupBox->setObjectName(QString::fromUtf8("DialAndLcdNumGroupBox"));
        DialAndLcdNumGroupBox->setGeometry(QRect(30, 160, 311, 121));
        Dial = new QDial(DialAndLcdNumGroupBox);
        Dial->setObjectName(QString::fromUtf8("Dial"));
        Dial->setGeometry(QRect(20, 20, 81, 91));
        Dial->setMaximum(100);
        Dial->setSingleStep(10);
        Dial->setPageStep(10);
        Dial->setWrapping(false);
        Dial->setNotchesVisible(true);
        LcdDisplay = new QLCDNumber(DialAndLcdNumGroupBox);
        LcdDisplay->setObjectName(QString::fromUtf8("LcdDisplay"));
        LcdDisplay->setGeometry(QRect(110, 10, 81, 101));
        gridLayoutWidget_2 = new QWidget(DialAndLcdNumGroupBox);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(210, 10, 91, 101));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        BinRadioBtn = new QRadioButton(gridLayoutWidget_2);
        BinRadioBtn->setObjectName(QString::fromUtf8("BinRadioBtn"));

        gridLayout_2->addWidget(BinRadioBtn, 0, 0, 1, 1);

        OctRadioBtn = new QRadioButton(gridLayoutWidget_2);
        OctRadioBtn->setObjectName(QString::fromUtf8("OctRadioBtn"));

        gridLayout_2->addWidget(OctRadioBtn, 1, 0, 1, 1);

        DecRadioBtn = new QRadioButton(gridLayoutWidget_2);
        DecRadioBtn->setObjectName(QString::fromUtf8("DecRadioBtn"));

        gridLayout_2->addWidget(DecRadioBtn, 2, 0, 1, 1);

        HexRadioBtn = new QRadioButton(gridLayoutWidget_2);
        HexRadioBtn->setObjectName(QString::fromUtf8("HexRadioBtn"));

        gridLayout_2->addWidget(HexRadioBtn, 3, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 363, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ColorizerGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\350\260\203\350\211\262\345\231\250", nullptr));
        GreenNum->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        RedNum->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        BlueNum->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        AlphaNum->setText(QCoreApplication::translate("MainWindow", "Alpha", nullptr));
        DialAndLcdNumGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Dial And LCD Number", nullptr));
        BinRadioBtn->setText(QCoreApplication::translate("MainWindow", "\344\272\214\350\277\233\345\210\266", nullptr));
        OctRadioBtn->setText(QCoreApplication::translate("MainWindow", "\345\205\253\350\277\233\345\210\266", nullptr));
        DecRadioBtn->setText(QCoreApplication::translate("MainWindow", "\345\215\201\350\277\233\345\210\266", nullptr));
        HexRadioBtn->setText(QCoreApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
