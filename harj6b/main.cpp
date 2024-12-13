#include <QCoreApplication>
#include "exampleclass.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ExampleClass classi;
    classi.startToWait();
    return a.exec();
}
