#include "framelesswidgetcopy.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    framelesswidgetcopy w;
    w.show();
    return a.exec();
}
