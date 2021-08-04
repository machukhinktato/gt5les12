#pragma once
#include <QWidget>

class TransparentRectangle : public QWidget{
public:
    TransparentRectangle(QWidget *parent=nullptr);

protected:
    void paintEvent(QPaintEvent *e);
    void doPainting();
};