#include "mainwindow.h"
#include "testenum.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    testEnum test;
    test.DoTest(QString("TEST1"));

    return a.exec();
}
