#pragma once
#include "QWidget"

class Puff : public QWidget {
public:
    Puff(QWidget *parent  = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
    void timerEvent(QTimerEvent *event);

private:

    int x;
    qreal opacity;
    int timerId;

    void doPainting();
};

