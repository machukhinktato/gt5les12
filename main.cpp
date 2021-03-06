#include <QApplication>
#include <QPushButton>
#include "lines.h"
#include "colours.h"
#include "patterns.h"
#include "transparent_rectangles.h"
#include "donut.h"
#include "shapes.h"
#include "linear_gradients.h"
#include "radial_gradient.h"
#include "puff.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

//    Lines window;
//    Colours window;
//    Patterns window;
//    TransparentRectangle window;
//    Donut window;
//    Shapes window;
//    LinearGradients window;
//    RadialGradient window;
    Puff window;

    window.resize(350, 290);
    window.setWindowTitle("MACHUKHINKTATO AREA");
    window.show();

    return QApplication::exec();
}
