#include <QtGui/QApplication>
#include <core/mainwindow.h>

using namespace Core;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
