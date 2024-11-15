#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTableWidgetItem"
#include "QDate"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    QTableWidgetItem *headerItem;
    QStringList headerText;
    headerText<<"文件"<<"阅读记录"<<"完结记录"<<"阅读时间";
     ui->TotalTable->setColumnCount(headerText.count());
    for (int i=0;i<ui->TotalTable->columnCount();i++)//列编号从0开始
   {
       headerItem=new QTableWidgetItem(headerText.at(i)); //新建一个QTableWidgetItem，headerText.at(i)获取headerText的i行字符串
       QFont font=headerItem->font();//获取原有字体设置
       font.setBold(false);//设置为粗体
       font.setPointSize(10);//字体大小
       headerItem->setForeground(Qt::black);//字体颜色
       headerItem->setFont(font);//设置字体
       ui->TotalTable->setHorizontalHeaderItem(i,headerItem); //设置表头单元格的Item
   }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addBtn_clicked()
{
    //添加一行
    //int curRow;
    int curRow=ui->TotalTable->rowCount();//当前行号
    ui->TotalTable->insertRow(curRow);//在表格尾部添加一行
    createItemsARow(curRow, "文件", "页数", "完结页数", QDateTime::currentDateTime());
}

void MainWindow::createItemsARow(int rowNo,QString File,QString Record,QString EndRecord, QDateTime CurrentDateTime)
{ //为一行的单元格创建 Items
    QTableWidgetItem *item;

    //文件
    //新建一个Item，设置单元格type为自定义的MainWindow::ctName
    item=new  QTableWidgetItem(File,MainWindow::ctFile);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter); //文本对齐格式
    ui->TotalTable->setItem(rowNo,MainWindow::colFile,item); //为单元格设置Item

    //记录
    item=new  QTableWidgetItem(Record,MainWindow::ctRecord);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter); //文本对齐格式
    ui->TotalTable->setItem(rowNo,MainWindow::colRecord,item); //为单元格设置Item

    //完结记录
    item=new  QTableWidgetItem(EndRecord,MainWindow::ctEndRecord);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter); //文本对齐格式
    ui->TotalTable->setItem(rowNo,MainWindow::colEndRecord,item); //为单元格设置Item

    //时间
    // 将日期时间格式化为字符串
    QString dateTime = CurrentDateTime.toString("yyyy-MM-dd hh:mm:ss");
    item=new QTableWidgetItem(dateTime,MainWindow::ctDateTime);
    item->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter); //文本对齐格式
    ui->TotalTable->setItem(rowNo,MainWindow::colDateTime,item); //为单元格设置Item
}
