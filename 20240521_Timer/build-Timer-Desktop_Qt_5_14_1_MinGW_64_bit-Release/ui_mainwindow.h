/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *DateTimeGroupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *TimeLabel;
    QLabel *DateTimeLabel;
    QTimeEdit *TimeEdit;
    QDateTimeEdit *DateTimeEdit;
    QLineEdit *EditTime;
    QLineEdit *EditDateAndTime;
    QPushButton *GetCurrentDateAndTime;
    QLabel *DateLabel;
    QLineEdit *EditDate;
    QDateEdit *DateEdit;
    QPushButton *SetDateAndTime;
    QPushButton *SetDate;
    QPushButton *SetTime;
    QLabel *StringLabel;
    QGroupBox *CalendarGroupBox;
    QWidget *formLayoutWidget;
    QFormLayout *CalendarFormLayout;
    QLabel *SelectedCalendaDate;
    QLineEdit *SelectedDateLineEdit;
    QCalendarWidget *Calendar;
    QGroupBox *TimerGroupBox;
    QProgressBar *TimerProgressBar;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QTimeEdit *TimePeriodEdit;
    QPushButton *TimerStartButton;
    QPushButton *TimerStopButton;
    QLabel *TimePeriodLabel;
    QPushButton *SetTimePeriodButton;
    QLCDNumber *HourLcdNum;
    QLCDNumber *MinuteLcdNum;
    QLCDNumber *SecondLcdNum;
    QLineEdit *TimePassLineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(927, 398);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        DateTimeGroupBox = new QGroupBox(centralwidget);
        DateTimeGroupBox->setObjectName(QString::fromUtf8("DateTimeGroupBox"));
        DateTimeGroupBox->setGeometry(QRect(10, 40, 491, 151));
        gridLayoutWidget = new QWidget(DateTimeGroupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 471, 132));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        TimeLabel = new QLabel(gridLayoutWidget);
        TimeLabel->setObjectName(QString::fromUtf8("TimeLabel"));

        gridLayout->addWidget(TimeLabel, 3, 0, 1, 1);

        DateTimeLabel = new QLabel(gridLayoutWidget);
        DateTimeLabel->setObjectName(QString::fromUtf8("DateTimeLabel"));

        gridLayout->addWidget(DateTimeLabel, 1, 0, 1, 1);

        TimeEdit = new QTimeEdit(gridLayoutWidget);
        TimeEdit->setObjectName(QString::fromUtf8("TimeEdit"));

        gridLayout->addWidget(TimeEdit, 3, 1, 1, 1);

        DateTimeEdit = new QDateTimeEdit(gridLayoutWidget);
        DateTimeEdit->setObjectName(QString::fromUtf8("DateTimeEdit"));

        gridLayout->addWidget(DateTimeEdit, 1, 1, 1, 1);

        EditTime = new QLineEdit(gridLayoutWidget);
        EditTime->setObjectName(QString::fromUtf8("EditTime"));

        gridLayout->addWidget(EditTime, 3, 2, 1, 1);

        EditDateAndTime = new QLineEdit(gridLayoutWidget);
        EditDateAndTime->setObjectName(QString::fromUtf8("EditDateAndTime"));

        gridLayout->addWidget(EditDateAndTime, 1, 2, 1, 1);

        GetCurrentDateAndTime = new QPushButton(gridLayoutWidget);
        GetCurrentDateAndTime->setObjectName(QString::fromUtf8("GetCurrentDateAndTime"));

        gridLayout->addWidget(GetCurrentDateAndTime, 0, 0, 1, 2);

        DateLabel = new QLabel(gridLayoutWidget);
        DateLabel->setObjectName(QString::fromUtf8("DateLabel"));

        gridLayout->addWidget(DateLabel, 2, 0, 1, 1);

        EditDate = new QLineEdit(gridLayoutWidget);
        EditDate->setObjectName(QString::fromUtf8("EditDate"));

        gridLayout->addWidget(EditDate, 2, 2, 1, 1);

        DateEdit = new QDateEdit(gridLayoutWidget);
        DateEdit->setObjectName(QString::fromUtf8("DateEdit"));

        gridLayout->addWidget(DateEdit, 2, 1, 1, 1);

        SetDateAndTime = new QPushButton(gridLayoutWidget);
        SetDateAndTime->setObjectName(QString::fromUtf8("SetDateAndTime"));

        gridLayout->addWidget(SetDateAndTime, 1, 3, 1, 1);

        SetDate = new QPushButton(gridLayoutWidget);
        SetDate->setObjectName(QString::fromUtf8("SetDate"));

        gridLayout->addWidget(SetDate, 2, 3, 1, 1);

        SetTime = new QPushButton(gridLayoutWidget);
        SetTime->setObjectName(QString::fromUtf8("SetTime"));

        gridLayout->addWidget(SetTime, 3, 3, 1, 1);

        StringLabel = new QLabel(gridLayoutWidget);
        StringLabel->setObjectName(QString::fromUtf8("StringLabel"));

        gridLayout->addWidget(StringLabel, 0, 2, 1, 2);

        CalendarGroupBox = new QGroupBox(centralwidget);
        CalendarGroupBox->setObjectName(QString::fromUtf8("CalendarGroupBox"));
        CalendarGroupBox->setGeometry(QRect(530, 40, 381, 271));
        formLayoutWidget = new QWidget(CalendarGroupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 20, 351, 240));
        CalendarFormLayout = new QFormLayout(formLayoutWidget);
        CalendarFormLayout->setObjectName(QString::fromUtf8("CalendarFormLayout"));
        CalendarFormLayout->setContentsMargins(0, 0, 0, 0);
        SelectedCalendaDate = new QLabel(formLayoutWidget);
        SelectedCalendaDate->setObjectName(QString::fromUtf8("SelectedCalendaDate"));

        CalendarFormLayout->setWidget(0, QFormLayout::LabelRole, SelectedCalendaDate);

        SelectedDateLineEdit = new QLineEdit(formLayoutWidget);
        SelectedDateLineEdit->setObjectName(QString::fromUtf8("SelectedDateLineEdit"));

        CalendarFormLayout->setWidget(0, QFormLayout::FieldRole, SelectedDateLineEdit);

        Calendar = new QCalendarWidget(formLayoutWidget);
        Calendar->setObjectName(QString::fromUtf8("Calendar"));

        CalendarFormLayout->setWidget(1, QFormLayout::SpanningRole, Calendar);

        TimerGroupBox = new QGroupBox(centralwidget);
        TimerGroupBox->setObjectName(QString::fromUtf8("TimerGroupBox"));
        TimerGroupBox->setGeometry(QRect(20, 200, 481, 131));
        TimerProgressBar = new QProgressBar(TimerGroupBox);
        TimerProgressBar->setObjectName(QString::fromUtf8("TimerProgressBar"));
        TimerProgressBar->setGeometry(QRect(30, 100, 411, 20));
        TimerProgressBar->setValue(0);
        gridLayoutWidget_2 = new QWidget(TimerGroupBox);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(30, 10, 401, 81));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        TimePeriodEdit = new QTimeEdit(gridLayoutWidget_2);
        TimePeriodEdit->setObjectName(QString::fromUtf8("TimePeriodEdit"));
        TimePeriodEdit->setDate(QDate(2000, 1, 1));
        TimePeriodEdit->setTime(QTime(0, 0, 0));

        gridLayout_2->addWidget(TimePeriodEdit, 1, 1, 1, 1);

        TimerStartButton = new QPushButton(gridLayoutWidget_2);
        TimerStartButton->setObjectName(QString::fromUtf8("TimerStartButton"));

        gridLayout_2->addWidget(TimerStartButton, 0, 0, 1, 1);

        TimerStopButton = new QPushButton(gridLayoutWidget_2);
        TimerStopButton->setObjectName(QString::fromUtf8("TimerStopButton"));

        gridLayout_2->addWidget(TimerStopButton, 0, 1, 1, 1);

        TimePeriodLabel = new QLabel(gridLayoutWidget_2);
        TimePeriodLabel->setObjectName(QString::fromUtf8("TimePeriodLabel"));

        gridLayout_2->addWidget(TimePeriodLabel, 1, 0, 1, 1);

        SetTimePeriodButton = new QPushButton(gridLayoutWidget_2);
        SetTimePeriodButton->setObjectName(QString::fromUtf8("SetTimePeriodButton"));

        gridLayout_2->addWidget(SetTimePeriodButton, 1, 2, 1, 1);

        HourLcdNum = new QLCDNumber(gridLayoutWidget_2);
        HourLcdNum->setObjectName(QString::fromUtf8("HourLcdNum"));

        gridLayout_2->addWidget(HourLcdNum, 2, 0, 1, 1);

        MinuteLcdNum = new QLCDNumber(gridLayoutWidget_2);
        MinuteLcdNum->setObjectName(QString::fromUtf8("MinuteLcdNum"));

        gridLayout_2->addWidget(MinuteLcdNum, 2, 1, 1, 1);

        SecondLcdNum = new QLCDNumber(gridLayoutWidget_2);
        SecondLcdNum->setObjectName(QString::fromUtf8("SecondLcdNum"));

        gridLayout_2->addWidget(SecondLcdNum, 2, 2, 1, 1);

        TimePassLineEdit = new QLineEdit(gridLayoutWidget_2);
        TimePassLineEdit->setObjectName(QString::fromUtf8("TimePassLineEdit"));

        gridLayout_2->addWidget(TimePassLineEdit, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 927, 22));
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
        DateTimeGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237\345\222\214\346\227\266\351\227\264", nullptr));
        TimeLabel->setText(QCoreApplication::translate("MainWindow", "\346\227\266\351\227\264", nullptr));
        DateTimeLabel->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        TimeEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "hh:mm:ss", nullptr));
        DateTimeEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "yyyy/MM/dd hh:mm:ss", nullptr));
        GetCurrentDateAndTime->setText(QCoreApplication::translate("MainWindow", "\350\216\267\345\217\226\345\275\223\345\211\215\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        DateLabel->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237", nullptr));
        DateEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "yyyy/MM/dd", nullptr));
        SetDateAndTime->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        SetDate->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\227\245\346\234\237", nullptr));
        SetTime->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\227\266\351\227\264", nullptr));
        StringLabel->setText(QCoreApplication::translate("MainWindow", "\345\255\227\347\254\246\344\270\262\346\230\276\347\244\272 ", nullptr));
        CalendarGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\227\245\345\216\206", nullptr));
        SelectedCalendaDate->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\347\232\204\346\227\245\346\234\237\357\274\232", nullptr));
        TimerGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\345\256\232\346\227\266\345\231\250", nullptr));
        TimePeriodEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "z \346\257\253\347\247\222", nullptr));
        TimerStartButton->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
        TimerStopButton->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
        TimePeriodLabel->setText(QCoreApplication::translate("MainWindow", "\345\256\232\346\227\266\345\221\250\346\234\237\357\274\232", nullptr));
        SetTimePeriodButton->setText(QCoreApplication::translate("MainWindow", "\350\256\276\345\256\232\345\221\250\346\234\237", nullptr));
        TimePassLineEdit->setText(QCoreApplication::translate("MainWindow", "\346\265\201\351\200\235\346\227\266\351\227\264\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
