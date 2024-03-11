#include "mainwindowDT.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindowDT w;
    w.show();
    return a.exec();
}
