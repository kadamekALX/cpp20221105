#include "mywidget.h"
#include "counterbutton.h"

#include <iostream>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    setMinimumSize(400, 300);
//    resize(400, 300);
    przycisk2 = new CounterButton{this};
    przycisk2->move(100, 100);
    przycisk = new CounterButton{this};
}

MyWidget::~MyWidget()
{
}



//Wyświetl przycisk z napisem "0".
// Każde naciśnięcie przycisku powinno zwiększać
// wyświetlaną liczbę o 1.

//2. Wyświetl DWA takie przyciski,
//każdy z niezależnym licznikiem
