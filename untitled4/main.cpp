#include "mywidget.h"
#include "HP_rectangle.cpp"
#include"packchoice.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mywidget w;
    w.show();
    return a.exec();
}
