#include "DataMining.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    DataMining window;
    window.show();
    return app.exec();
}
