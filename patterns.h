#pragma once

#include <QWidget>

class Patterns : public QWidget {
public:
    Patterns(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *e);

private:
    void doPainting();

};