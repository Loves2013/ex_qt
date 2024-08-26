#include "mainwindow.h"
#include <QApplication>
#include <QString>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QString str1 = "123";
    QString str2 = "456";

    //数据转换 to int
    int a1 = str1.toInt();
    qDebug()<<a1;
    //数据转换
    int a2 = 123;
    QString str3 = QString::number(a2);
    qDebug() <<str3;
    QString str4 = str1.append(str2);
    qDebug()<<str4;
    //大小写转换
    QString str5 = "Qbcdefg";
    QString str6 = str5.toLower();
    qDebug() <<str6;
    QString str7 = str6.toUpper();
    qDebug()<< str7;
    //count size() length
    int len1 = str7.size();
    int len2 = str7.count();
    int len3 = str7.length();
    qDebug()<<"len1"<<len1<<"len2"<<len2<<"len3"<<len3;
    //去掉首尾空字符串
    // " Are you ok "
    QString str8 = " Are you ok ";
    QString str9 = str8.trimmed();
    qDebug() <<str8;
    qDebug()<<str9;

    /* 空格同意1个空格 */
    QString str10 = "  Are you   ok   ";
    QString str11 = str10.simplified();
    qDebug() <<str10;
    qDebug()<<str11;

    //D:\\Asd\\file\\imag\\123.png   获取123.png
    QString str12 = "D:\\Asd\\file\\imag\\123.png";
    int last = str12.lastIndexOf("\\");
    int png = str12.indexOf(".png");

    // 字符串判空
    QString str14 = "";
    qDebug()<<str14.isEmpty();

    //是否包含 1234 ture/false
    int index = str12.contains("1234");
    qDebug()<<"index: "<<index;


    //判断是否 .mp4后最
    QString name = "123.mp4";
    //不区分大小写
    bool isMp4 = name.endsWith(".MP4",Qt::CaseInsensitive);
    qDebug()<<"MP4: "<<isMp4;


    return a.exec();

}
