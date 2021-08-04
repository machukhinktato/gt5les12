#pragma once

#include "QWidget"

class RadialGradient : public QWidget {
public:
    RadialGradient(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    void doPainting();
};