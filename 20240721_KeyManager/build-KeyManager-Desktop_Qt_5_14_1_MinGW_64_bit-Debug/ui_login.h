/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditUser;
    QLabel *labUser;
    QLabel *labPassword;
    QPushButton *btLogin;
    QPushButton *btRegister;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(396, 269);
        gridLayoutWidget = new QWidget(login);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(40, 50, 311, 101));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditPassword = new QLineEdit(gridLayoutWidget);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));

        gridLayout->addWidget(lineEditPassword, 2, 1, 1, 1);

        lineEditUser = new QLineEdit(gridLayoutWidget);
        lineEditUser->setObjectName(QString::fromUtf8("lineEditUser"));

        gridLayout->addWidget(lineEditUser, 1, 1, 1, 1);

        labUser = new QLabel(gridLayoutWidget);
        labUser->setObjectName(QString::fromUtf8("labUser"));

        gridLayout->addWidget(labUser, 1, 0, 1, 1);

        labPassword = new QLabel(gridLayoutWidget);
        labPassword->setObjectName(QString::fromUtf8("labPassword"));

        gridLayout->addWidget(labPassword, 2, 0, 1, 1);

        btLogin = new QPushButton(login);
        btLogin->setObjectName(QString::fromUtf8("btLogin"));
        btLogin->setGeometry(QRect(50, 180, 93, 28));
        btRegister = new QPushButton(login);
        btRegister->setObjectName(QString::fromUtf8("btRegister"));
        btRegister->setGeometry(QRect(240, 180, 93, 28));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        labUser->setText(QCoreApplication::translate("login", "\347\224\250\346\210\267\345\220\215", nullptr));
        labPassword->setText(QCoreApplication::translate("login", "\345\257\206\347\240\201", nullptr));
        btLogin->setText(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        btRegister->setText(QCoreApplication::translate("login", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
