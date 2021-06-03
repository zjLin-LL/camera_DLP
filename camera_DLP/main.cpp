#include "camera_DLP.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    camera_DLP w;

    w.show();
    return a.exec();
}
