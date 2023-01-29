#include "mywidget.h"

#include <iostream>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    licznik = 0;
    licznik2 = 0;
    setMinimumSize(400, 300);
//    resize(400, 300);
    przycisk2 = new QPushButton{"0", this};
    przycisk2->move(100, 100);
    connect(przycisk2, &QPushButton::clicked, this, &MyWidget::przycisk2Wcisniety);

    przycisk = new QPushButton{"0", this};
    connect(przycisk, &QPushButton::clicked, this, &MyWidget::przyciskWcisniety);
}

MyWidget::~MyWidget()
{
}

void MyWidget::przyciskWcisniety()
{
    licznik += 1;
    przycisk->setText(QString::number(licznik));
}

void MyWidget::przycisk2Wcisniety()
{
    przycisk2->setText(QString::number(++licznik2));
}


//Wyświetl przycisk z napisem "0".
// Każde naciśnięcie przycisku powinno zwiększać
// wyświetlaną liczbę o 1.

//2. Wyświetl DWA takie przyciski,
//każdy z niezależnym licznikiem
