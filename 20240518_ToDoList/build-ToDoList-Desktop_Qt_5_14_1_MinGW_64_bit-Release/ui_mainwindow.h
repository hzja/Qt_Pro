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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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
    QLineEdit *FirstValue;
    QComboBox *CalculateMethod;
    QLineEdit *SecondValue;
    QLabel *Equal;
    QLineEdit *Result;
    QPushButton *Caculate;
    QPushButton *Equit;
    QPushButton *Refresh;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(394, 205);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("Calculator");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("img/Calculator.svg"), QSize(), QIcon::Normal, QIcon::Off);
        }
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(6.000000000000000);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        FirstValue = new QLineEdit(centralwidget);
        FirstValue->setObjectName(QString::fromUtf8("FirstValue"));
        FirstValue->setGeometry(QRect(30, 40, 81, 21));
        CalculateMethod = new QComboBox(centralwidget);
        CalculateMethod->addItem(QString());
        CalculateMethod->addItem(QString());
        CalculateMethod->addItem(QString());
        CalculateMethod->addItem(QString());
        CalculateMethod->setObjectName(QString::fromUtf8("CalculateMethod"));
        CalculateMethod->setGeometry(QRect(120, 40, 41, 22));
        SecondValue = new QLineEdit(centralwidget);
        SecondValue->setObjectName(QString::fromUtf8("SecondValue"));
        SecondValue->setGeometry(QRect(170, 40, 71, 21));
        Equal = new QLabel(centralwidget);
        Equal->setObjectName(QString::fromUtf8("Equal"));
        Equal->setGeometry(QRect(250, 40, 16, 16));
        Result = new QLineEdit(centralwidget);
        Result->setObjectName(QString::fromUtf8("Result"));
        Result->setGeometry(QRect(270, 40, 81, 21));
        Caculate = new QPushButton(centralwidget);
        Caculate->setObjectName(QString::fromUtf8("Caculate"));
        Caculate->setGeometry(QRect(60, 90, 61, 28));
        Equit = new QPushButton(centralwidget);
        Equit->setObjectName(QString::fromUtf8("Equit"));
        Equit->setGeometry(QRect(270, 90, 61, 28));
        Refresh = new QPushButton(centralwidget);
        Refresh->setObjectName(QString::fromUtf8("Refresh"));
        Refresh->setGeometry(QRect(160, 90, 61, 28));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 394, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(Equit, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\345\231\250", nullptr));
        CalculateMethod->setItemText(0, QCoreApplication::translate("MainWindow", "+", nullptr));
        CalculateMethod->setItemText(1, QCoreApplication::translate("MainWindow", "-", nullptr));
        CalculateMethod->setItemText(2, QCoreApplication::translate("MainWindow", "x", nullptr));
        CalculateMethod->setItemText(3, QCoreApplication::translate("MainWindow", "/", nullptr));

        Equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Caculate->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227", nullptr));
        Equit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        Refresh->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
