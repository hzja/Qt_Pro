#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QTreeWidgetItem>
#include <QFileDialog>
#include <QDir>
#include <QResizeEvent>

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
    void on_actAddFolder_triggered();

    void on_actAddFiles_triggered();

    void on_PhotoTreeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

    void on_actDeleteItem_triggered();

    void on_actScanItems_triggered();

    void on_actZoomFitH_triggered();

    void on_actZoomFitW_triggered();

    void on_actZoomIn_triggered();

    void on_actZoomRealSize_triggered();

    void create_mainToolBar();

    void addFolderEntryItem(QTreeWidgetItem *parItem, QString dirName);

    void on_actDockVisible_toggled(bool arg1);

    void on_actDockFloat_triggered(bool checked);

    void on_DockWid_visibilityChanged(bool visible);

    void on_DockWid_topLevelChanged(bool topLevel);

    void on_SavedFileBtn_clicked();

    void on_ImgSlider_valueChanged(int NewVal);

    void on_actZoomDe_triggered();

    void on_actExit_triggered();

private:
    Ui::MainWindow *ui;

    //枚举类型treeItemType， 用于创建 QTreeWidgetItem 时作为节点的type, 自定义类型必须大于1000
    //itTopItem 顶层节点;  itGroupItem 组节点； itImageItem 图片

    enum  treeItemType{itTopItem=1001,itGroupItem,itImageItem};
    //枚举类型，表示列号

    enum  treeColNum{colItem=0, colItemType=1}; //目录树列的编号定义
    QLabel  *LabFileName;
    QPixmap curPixmap; //当前的图片
    float   pixRatio;//当前图片缩放比例

    void    iniTree();//目录树初始化
    void    addFolderItem(QTreeWidgetItem *parItem, QString dirName);//添加一个目录节点
    QString getFinalFolderName(const QString &fullPathName);//从目录全名称中获取最后的文件夹名称
    void    addImageItem(QTreeWidgetItem *parItem,QString aFilename);//添加一个图片节点
    void    displayImage(QTreeWidgetItem *item); //显示一个图片节点的图片
    //void    ChangeCheckable(QTreeWidgetItem *Item,bool chk);//更改节点的checkable状态
    void    changeItemCaption(QTreeWidgetItem *item); //遍历改变节点标题

protected:
    void resizeEvent(QResizeEvent *event);
};
#endif // MAINWINDOW_H
