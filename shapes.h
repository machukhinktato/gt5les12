#pragma once
#include "QWidget"

class Shapes : public QWidget{
public:
    Shapes(QWidget *parent=nullptr);

protected:
    void paintEvent(QPaintEvent *e);

private:
    void doPrinting();
};