#include "counterbutton.h"

CounterButton::CounterButton(QWidget* parent)
    : QPushButton{parent}, licznik{0}
{
    setText("0");
    connect(this, &QPushButton::clicked, this, &CounterButton::przyciskWcisniety);
}

void CounterButton::przyciskWcisniety()
{
    setText(QString::number(++licznik));
}
