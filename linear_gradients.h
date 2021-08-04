#pragma once

#include "QWidget"

class LinearGradients : public QWidget {
public:
    LinearGradients(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *e);

private:
    void doPainting();
};