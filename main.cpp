#include "gamewidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GameWidget gamewidget;
    gamewidget.show();
    return a.exec();
}
