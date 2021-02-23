#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    // open
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
