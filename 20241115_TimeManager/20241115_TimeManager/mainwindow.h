#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addBtn_clicked();

private:
    Ui::MainWindow *ui;
    //自定义单元格Type的类型，在创建单元格的item时使用
    enum CellType{ctFile=1000,ctRecord,ctEndRecord,ctDate,ctDateTime};

    //各字段在表格中的列号
    enum FieldColNum{colFile,colRecord,colEndRecord,colDateTime};
    void createItemsARow(int rowNo,QString File,QString Record,QString EndRecord, QDateTime DateTime);
};
#endif // MAINWINDOW_H
