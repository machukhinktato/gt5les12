#pragma once

#include "QWidget"

class Donut : public QWidget{
public:
    Donut(QWidget *parent=nullptr);

protected:
    void paintEvent(QPaintEvent *e);

private:
    void doPainting();
};