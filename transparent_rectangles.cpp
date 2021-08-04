#include "QApplication"
#include "QPainter"
#include "QPainterPath"
#include "transparent_rectangles.h"


TransparentRectangle::TransparentRectangle(QWidget *parent) : QWidget(parent) {}

void TransparentRectangle::paintEvent(QPaintEvent *e) {
    Q_UNUSED(e);

    doPainting();
}

void TransparentRectangle::doPainting() {
    QPainter painter(this);

    for (int i = 0; i <= 11; ++i) {
        painter.setOpacity(i*0.1);
        painter.fillRect(50*i, 20,40,40,Qt::darkGray);
    }
}