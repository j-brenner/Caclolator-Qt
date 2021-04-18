#include "caclolator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Caclolator w;

    w.show();
    return (a.exec());
}
