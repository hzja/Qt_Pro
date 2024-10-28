#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QDate>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
     //设置登录成功的槽函数，使登录成功后的用户名得以传递;
    void loginSuc(const QString &username);

private slots:
    void on_setTableHead_clicked();
    void on_btnIniTableData_clicked();
    void on_tableInfo_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);
    void on_btnInsertRow_clicked();
    void on_btnAppendRow_clicked();
    void on_btnDelCurRow_clicked();
    void on_chkBoxTabEditable_clicked(bool checked);
    void on_chkBoxHeaderH_clicked(bool checked);
    void on_chkBoxHeaderV_clicked(bool checked);
    void on_chkBoxRowColor_clicked(bool checked);
    void on_rBtnSelectItem_clicked();
    void on_rBtnSelectRow_clicked();
    void on_btnReadToEdit_clicked();
    void on_LoginCheck_clicked();

private:
    Ui::MainWindow *ui;

    //自定义单元格Type的类型，在创建单元格的item时使用
    enum CellType{ctName=1000,ctSex,ctBirth,ctNation,ctPartyM,ctScore};

    //各字段在表格中的列号
    enum FieldColNum{colName=0,colSex,colBirth,colNation,colScore,colPartyM};

    QString userName;
    QLabel *labCurUser; //状态栏上用于显示单元格的行号、列号
    void createItemsARow(int rowNo,QString Name,QString Sex,QDate birth,QString Nation,bool isPM,int score) ; //为某一行创建 items

};
#endif // MAINWINDOW_H