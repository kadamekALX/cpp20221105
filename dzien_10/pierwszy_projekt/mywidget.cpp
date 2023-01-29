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

    CounterButton* tab[5][5]; // hint do cz. 2

    QVBoxLayout* pionowy = new QVBoxLayout{this};
    for (int wiersz = 0; wiersz < 5; wiersz += 1) {
        QHBoxLayout* poziomy = new QHBoxLayout{};
        pionowy->addLayout(poziomy);
        for (int kolumna = 0; kolumna < 5; kolumna += 1) {
            CounterButton* btn = new CounterButton{};
            poziomy->addWidget(btn);
            tab[wiersz][kolumna] = btn; // zapamietujemy adres przycisku
        }
    }
    QPushButton* reset = new QPushButton{"RESET"};
    pionowy->addWidget(reset);

    //connect(tab[2][2], &QPushButton::clicked, tab[0][0], &CounterButton::przyciskWcisniety);
    for (int w = 0; w < 5; w += 1) {
        for (int k = 0; k < 5; k += 1) {
            if (w > 0)
                connect(tab[w][k], &QPushButton::clicked, tab[w - 1][k], &CounterButton::przyciskWcisniety);
            if (k > 0)
                connect(tab[w][k], &QPushButton::clicked, tab[w][k - 1], &CounterButton::przyciskWcisniety);
            if (w + 1 < 5)
                connect(tab[w][k], &QPushButton::clicked, tab[w + 1][k], &CounterButton::przyciskWcisniety);
            if (k + 1 < 5)
                connect(tab[w][k], &QPushButton::clicked, tab[w][k + 1], &CounterButton::przyciskWcisniety);
        }
    }

}

MyWidget::~MyWidget()
{
}

//1. Ułóż layout 5 x 5 złożony z CounterButtonów

//2. Połącz CounterButtony tak, aby wciśnięcie przycisku zwiększało
// również liczniki jego sąsiadów (góra, dół, lewo, prawo)
