#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    w.setFixedWidth(400);
//    w.setFixedHeight(224);
    w.setFixedSize(QSize(400, 248));
    w.show();



    return a.exec();
}
