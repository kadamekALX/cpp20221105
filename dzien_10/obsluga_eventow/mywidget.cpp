#include "mywidget.h"
#include "przycisk.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    Przycisk* p = new Przycisk{this};
    p->resize(200, 100);
}

MyWidget::~MyWidget()
{
}

