#include "mywidget.h"

#include <iostream>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    setMinimumSize(800, 600);
//    resize(400, 300);
    przycisk = new QPushButton{"Click me!", this};
    connect(przycisk, &QPushButton::clicked, this, &MyWidget::przyciskWcisniety);
}

MyWidget::~MyWidget()
{
}

void MyWidget::przyciskWcisniety()
{
    przycisk->setText("Brawo!");
}

