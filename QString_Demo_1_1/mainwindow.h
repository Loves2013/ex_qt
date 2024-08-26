#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

/*
   MOC 元编译器系统
    特殊关键字： signals， slots, emit

    在预编译前，用元编编译器moc.exe 把qt代码编译为标准C++兼容的代码，
    在输入命令： moc 头文件 -o 输入文件名

*/

class MainWindow : public QMainWindow
{ /*
Q_OBJECT宏必须出现在类定义的私有部分，声明自己的信号和槽，或者使用Qt的元对象系统提供的其他服务。
注意:这个宏要求类是QObject的子类。使用Q_GADGET而不是Q_OBJECT来启用元对象系统对非QObject子类中的枚举的支持。
参见元对象系统，信号和槽，以及Qt的属性系统。
*/
private:
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
