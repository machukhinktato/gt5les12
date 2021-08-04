//
// Created by machukhinktato on 8/4/21.
//
#include "QApplication"
#include "QPainter"
#include "donut.h"


Donut::Donut(QWidget *parent) : QWidget(parent) {}

void Donut::paintEvent(QPaintEvent *e) {
    Q_UNUSED(e);

    doPainting();
}

void Donut::doPainting() {
    QPainter painter(this);

    painter.setPen(QPen(QBrush("#535353"), 0.5));
    painter.setRenderHint(QPainter::Antialiasing);

    int h = height();
    int w = width();

    painter.translate(QPoint(w/2, h/2));
    for (qreal i = 0; i < 360.0; i+=5.0) {
        painter.drawEllipse(-125,-40,250,80);
        painter.rotate(5.0);
    }
}