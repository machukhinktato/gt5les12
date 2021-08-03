#include <QApplication>
#include <QPushButton>
#include "lines.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    Lines window;

    window.resize(280, 270);
    window.show();
    return QApplication::exec();
}
