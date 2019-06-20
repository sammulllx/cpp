#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//实例化对象QApplication是一个类，a为对象
    MainWindow w;//等价MainWindow w=new MainWindow();
    w.show();

    return a.exec();
}
//主运行循环
//动力 --> 点击事件 键盘事件
//时间不确定要一直监听return a.exec();回到main函数开头
