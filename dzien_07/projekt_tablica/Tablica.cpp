#include <iostream>
#include "Tablica.hpp" // include w cudzysłowie szuka pliku w lokalizacji względem położenia obecnego pliku


Tablica::Tablica(int n) {
    tab = new int[n];
    rozm = n;
    pojemnosc = n;
    for (int i = 0; i < n; i += 1) {
        tab[i] = 0;
    }
}

Tablica::Tablica(const Tablica& t) {
    skopiuj(t);
}

void Tablica::operator=(const Tablica& t) {
    if (this == &t) {
        return;
    }
    usun();
    skopiuj(t);
}

Tablica::~Tablica() {
    usun();
}

void Tablica::wypisz() const {
    for (int i = 0; i < rozm; i += 1) {
        std::cout << tab[i] << ' ';
    }
    std::cout << '\n';
}

int Tablica::rozmiar() const {
    return rozm;
}

int& Tablica::operator[](int idx) {
    return tab[idx];
}

const int& Tablica::operator[](int idx) const {
    return tab[idx];
}

void Tablica::skopiuj(const Tablica& t) {
    rozm = t.rozm;
    pojemnosc = t.pojemnosc;
    tab = new int[pojemnosc];
    for (int i = 0; i < rozm; i += 1) {
        tab[i] = t.tab[i];
    }
}

void Tablica::usun() {
    delete[] tab;
}

void Tablica::dodaj(int x) {
    if (rozm == pojemnosc) {
        pojemnosc *= 2;
        int* tmp = new int[pojemnosc];
        for (int i = 0; i < rozm; i += 1) {
            tmp[i] = tab[i];
        }
        delete[] tab;
        tab = tmp;
    }
    tab[rozm++] = x;
}
