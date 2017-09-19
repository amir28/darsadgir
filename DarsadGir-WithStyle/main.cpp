#include "mainwindow.h"
#include <QApplication>
#include <QString>
#include <QFile>
#include <QFont>
#include <QFontDatabase>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QFile styleFile( ":/style/style.css" );
    styleFile.open( QFile::ReadOnly );
    QString style( styleFile.readAll() );
    a.setStyleSheet( style );

    int id = QFontDatabase::addApplicationFont(":/fonts/Yekan.ttf");
    QString family = QFontDatabase::applicationFontFamilies(id).at(0);
    QFont Yekan(family);
    a.setFont(QFont(Yekan));
    w.setFixedSize(QSize(400, 248));



    w.show();



    return a.exec();
}
