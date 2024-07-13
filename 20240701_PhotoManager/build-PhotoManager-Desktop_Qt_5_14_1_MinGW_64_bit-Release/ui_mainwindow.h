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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actAddFolder;
    QAction *actAddFiles;
    QAction *actDeleteItem;
    QAction *actScanItems;
    QAction *actZoomFitH;
    QAction *actZoomFitW;
    QAction *actZoomIn;
    QAction *actZoomRealSize;
    QAction *actDockVisible;
    QAction *actDockFloat;
    QAction *actZoomDe;
    QAction *actExit;
    QWidget *centralwidget;
    QScrollArea *ScrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *LabPic;
    QPushButton *SavedFileBtn;
    QLineEdit *SavedFileName;
    QSlider *ImgSlider;
    QLabel *label;
    QLineEdit *ImgSliderVal;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QDockWidget *DockWid;
    QWidget *DockWidContents;
    QTreeWidget *PhotoTreeWidget;
    QToolBar *MainToolBar;
    QToolBar *SecondToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(858, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8("image/icons/\350\256\276\345\244\207\345\234\250\347\272\277\351\205\215\347\275\256-2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actAddFolder = new QAction(MainWindow);
        actAddFolder->setObjectName(QString::fromUtf8("actAddFolder"));
        actAddFiles = new QAction(MainWindow);
        actAddFiles->setObjectName(QString::fromUtf8("actAddFiles"));
        actDeleteItem = new QAction(MainWindow);
        actDeleteItem->setObjectName(QString::fromUtf8("actDeleteItem"));
        actScanItems = new QAction(MainWindow);
        actScanItems->setObjectName(QString::fromUtf8("actScanItems"));
        actZoomFitH = new QAction(MainWindow);
        actZoomFitH->setObjectName(QString::fromUtf8("actZoomFitH"));
        actZoomFitW = new QAction(MainWindow);
        actZoomFitW->setObjectName(QString::fromUtf8("actZoomFitW"));
        actZoomIn = new QAction(MainWindow);
        actZoomIn->setObjectName(QString::fromUtf8("actZoomIn"));
        actZoomRealSize = new QAction(MainWindow);
        actZoomRealSize->setObjectName(QString::fromUtf8("actZoomRealSize"));
        actDockVisible = new QAction(MainWindow);
        actDockVisible->setObjectName(QString::fromUtf8("actDockVisible"));
        actDockFloat = new QAction(MainWindow);
        actDockFloat->setObjectName(QString::fromUtf8("actDockFloat"));
        actZoomDe = new QAction(MainWindow);
        actZoomDe->setObjectName(QString::fromUtf8("actZoomDe"));
        actExit = new QAction(MainWindow);
        actExit->setObjectName(QString::fromUtf8("actExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ScrollArea = new QScrollArea(centralwidget);
        ScrollArea->setObjectName(QString::fromUtf8("ScrollArea"));
        ScrollArea->setGeometry(QRect(0, 10, 421, 531));
        ScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 419, 529));
        LabPic = new QLabel(scrollAreaWidgetContents);
        LabPic->setObjectName(QString::fromUtf8("LabPic"));
        LabPic->setGeometry(QRect(10, 30, 401, 491));
        SavedFileBtn = new QPushButton(scrollAreaWidgetContents);
        SavedFileBtn->setObjectName(QString::fromUtf8("SavedFileBtn"));
        SavedFileBtn->setGeometry(QRect(280, 0, 51, 21));
        SavedFileName = new QLineEdit(scrollAreaWidgetContents);
        SavedFileName->setObjectName(QString::fromUtf8("SavedFileName"));
        SavedFileName->setGeometry(QRect(330, 0, 71, 21));
        ImgSlider = new QSlider(scrollAreaWidgetContents);
        ImgSlider->setObjectName(QString::fromUtf8("ImgSlider"));
        ImgSlider->setGeometry(QRect(90, 0, 121, 22));
        ImgSlider->setMinimum(-1);
        ImgSlider->setMaximum(100);
        ImgSlider->setValue(-1);
        ImgSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 68, 21));
        ImgSliderVal = new QLineEdit(scrollAreaWidgetContents);
        ImgSliderVal->setObjectName(QString::fromUtf8("ImgSliderVal"));
        ImgSliderVal->setGeometry(QRect(220, 0, 31, 21));
        ScrollArea->setWidget(scrollAreaWidgetContents);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 858, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        DockWid = new QDockWidget(MainWindow);
        DockWid->setObjectName(QString::fromUtf8("DockWid"));
        DockWid->setFeatures(QDockWidget::AllDockWidgetFeatures);
        DockWidContents = new QWidget();
        DockWidContents->setObjectName(QString::fromUtf8("DockWidContents"));
        PhotoTreeWidget = new QTreeWidget(DockWidContents);
        PhotoTreeWidget->setObjectName(QString::fromUtf8("PhotoTreeWidget"));
        PhotoTreeWidget->setGeometry(QRect(0, 0, 521, 551));
        DockWid->setWidget(DockWidContents);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, DockWid);
        MainToolBar = new QToolBar(MainWindow);
        MainToolBar->setObjectName(QString::fromUtf8("MainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, MainToolBar);
        SecondToolBar = new QToolBar(MainWindow);
        SecondToolBar->setObjectName(QString::fromUtf8("SecondToolBar"));
        SecondToolBar->setLayoutDirection(Qt::LeftToRight);
        MainWindow->addToolBar(Qt::TopToolBarArea, SecondToolBar);
        MainWindow->insertToolBarBreak(SecondToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\205\247\347\211\207\345\244\204\347\220\206\345\231\250", nullptr));
        actAddFolder->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\273\204\345\220\210", nullptr));
        actAddFiles->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\345\233\276\347\211\207", nullptr));
        actDeleteItem->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\212\202\347\202\271", nullptr));
        actScanItems->setText(QCoreApplication::translate("MainWindow", "\351\201\215\345\216\206\350\212\202\347\202\271", nullptr));
        actZoomFitH->setText(QCoreApplication::translate("MainWindow", "\350\207\252\351\200\202\345\272\224\351\253\230\345\272\246", nullptr));
        actZoomFitW->setText(QCoreApplication::translate("MainWindow", "\350\207\252\351\200\202\345\272\224\345\256\275\345\272\246", nullptr));
        actZoomIn->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247\346\230\276\347\244\272", nullptr));
        actZoomRealSize->setText(QCoreApplication::translate("MainWindow", "\347\234\237\345\256\236\346\230\276\347\244\272", nullptr));
        actDockVisible->setText(QCoreApplication::translate("MainWindow", "\345\201\234\351\235\240\345\214\272\345\217\257\350\247\201", nullptr));
        actDockFloat->setText(QCoreApplication::translate("MainWindow", "\345\201\234\351\235\240\345\214\272\346\265\256\345\212\250\346\200\247", nullptr));
#if QT_CONFIG(tooltip)
        actDockFloat->setToolTip(QCoreApplication::translate("MainWindow", "\345\201\234\351\235\240\345\214\272\346\265\256\345\212\250\346\200\247", nullptr));
#endif // QT_CONFIG(tooltip)
        actZoomDe->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217\346\230\276\347\244\272", nullptr));
        actExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
        LabPic->setText(QString());
        SavedFileBtn->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\344\270\272", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207\350\264\250\351\207\217\357\274\232", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = PhotoTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\347\261\273\345\236\213", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271", nullptr));
        MainToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        SecondToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
