#include "mywidget.h"
#include "counterbutton.h"

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <iostream>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    setMinimumSize(400, 300);
    resize(500, 500);

    QHBoxLayout* layout = new QHBoxLayout{this};
    layout->addWidget(new CounterButton{});
    layout->addWidget(new CounterButton{});
    layout->addWidget(new CounterButton{});

    QVBoxLayout* pionowy = new QVBoxLayout{};
    layout->addLayout(pionowy);
    pionowy->addWidget(new CounterButton{});
    pionowy->addWidget(new CounterButton{});
}

MyWidget::~MyWidget()
{
}

