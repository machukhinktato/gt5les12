#include <QApplication>
#include <QPushButton>
#include "lines.h"
#include "colours.h"
#include "patterns.h"
#include "transparent_rectangles.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

//    Lines window;
//    Colours window;
//    Patterns window;
    TransparentRectangle window;


    window.resize(660, 90);
    window.setWindowTitle("MACHUKHINKTATO AREA");
    window.show();
    return QApplication::exec();
}
