#include <QApplication>
#include <QPushButton>
#include "lines.h"
#include "colours.h"
#include "patterns.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

//    Lines window;
//    Colours window;
    Patterns window;


    window.resize(360, 280);
    window.setWindowTitle("MACHUKHINKTATO AREA");
    window.show();
    return QApplication::exec();
}
