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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *comboBox;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QPlainTextEdit *plainTextEdit;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *UnderLineCheckBox;
    QCheckBox *BoldCheckBox;
    QCheckBox *ItalicCheckBox;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *RedRadioButton;
    QRadioButton *GreenRadioButton;
    QRadioButton *BlueRadioButton;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *ConfirmPushButton;
    QPushButton *CancelPushButton;
    QPushButton *QuitPushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(842, 555);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 140, 41, 21));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 140, 41, 21));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 50, 231, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);

        horizontalLayout->addWidget(label_3);

        comboBox = new QComboBox(horizontalLayoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 90, 231, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spinBox = new QSpinBox(horizontalLayoutWidget_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout_2->addWidget(spinBox);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 10, 231, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        lineEdit = new QLineEdit(horizontalLayoutWidget_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(430, 10, 221, 61));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(430, 80, 74, 81));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        UnderLineCheckBox = new QCheckBox(verticalLayoutWidget);
        UnderLineCheckBox->setObjectName(QString::fromUtf8("UnderLineCheckBox"));

        verticalLayout->addWidget(UnderLineCheckBox);

        BoldCheckBox = new QCheckBox(verticalLayoutWidget);
        BoldCheckBox->setObjectName(QString::fromUtf8("BoldCheckBox"));

        verticalLayout->addWidget(BoldCheckBox);

        ItalicCheckBox = new QCheckBox(verticalLayoutWidget);
        ItalicCheckBox->setObjectName(QString::fromUtf8("ItalicCheckBox"));

        verticalLayout->addWidget(ItalicCheckBox);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(510, 80, 71, 81));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        RedRadioButton = new QRadioButton(verticalLayoutWidget_2);
        RedRadioButton->setObjectName(QString::fromUtf8("RedRadioButton"));

        verticalLayout_2->addWidget(RedRadioButton);

        GreenRadioButton = new QRadioButton(verticalLayoutWidget_2);
        GreenRadioButton->setObjectName(QString::fromUtf8("GreenRadioButton"));

        verticalLayout_2->addWidget(GreenRadioButton);

        BlueRadioButton = new QRadioButton(verticalLayoutWidget_2);
        BlueRadioButton->setObjectName(QString::fromUtf8("BlueRadioButton"));

        verticalLayout_2->addWidget(BlueRadioButton);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(590, 80, 61, 81));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        ConfirmPushButton = new QPushButton(verticalLayoutWidget_3);
        ConfirmPushButton->setObjectName(QString::fromUtf8("ConfirmPushButton"));

        verticalLayout_3->addWidget(ConfirmPushButton);

        CancelPushButton = new QPushButton(verticalLayoutWidget_3);
        CancelPushButton->setObjectName(QString::fromUtf8("CancelPushButton"));

        verticalLayout_3->addWidget(CancelPushButton);

        QuitPushButton = new QPushButton(verticalLayoutWidget_3);
        QuitPushButton->setObjectName(QString::fromUtf8("QuitPushButton"));

        verticalLayout_3->addWidget(QuitPushButton);

        MainWindow->setCentralWidget(centralwidget);
#if QT_CONFIG(shortcut)
        label_3->setBuddy(comboBox);
        label_2->setBuddy(spinBox);
        label->setBuddy(lineEdit);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(lineEdit, spinBox);
        QWidget::setTabOrder(spinBox, pushButton_2);
        QWidget::setTabOrder(pushButton_2, comboBox);
        QWidget::setTabOrder(comboBox, pushButton);

        retranslateUi(MainWindow);
        QObject::connect(ConfirmPushButton, SIGNAL(clicked()), MainWindow, SLOT(show()));
        QObject::connect(CancelPushButton, SIGNAL(clicked()), MainWindow, SLOT(show()));
        QObject::connect(QuitPushButton, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\260\221\346\227\217(&M)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\271\264\351\276\204(&A)", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215(&N)", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("MainWindow", "Hello World", nullptr));
        UnderLineCheckBox->setText(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
        BoldCheckBox->setText(QCoreApplication::translate("MainWindow", "\345\212\240\347\262\227", nullptr));
        ItalicCheckBox->setText(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
        RedRadioButton->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        GreenRadioButton->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        BlueRadioButton->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        ConfirmPushButton->setText(QCoreApplication::translate("MainWindow", "\347\241\256\345\256\232", nullptr));
        CancelPushButton->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
        QuitPushButton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
