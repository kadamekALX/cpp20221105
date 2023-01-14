#include <iostream>

// Napisz metodę dodaj(int x), która doda wartość x na NOWE miejsce na końcu tablicy (co spowoduje również zmianę rozmiaru o 1)

// Tablica t{5};
// std::cout << t.rozmiar() << '\n'; // 5
// t.dodaj(14);
// std::cout << t.rozmiar() << '\n'; // 6
// t.wypisz(); // 0 0 0 0 0 14

class Tablica {
public:
    Tablica(int n);
    Tablica(const Tablica& t);
    ~Tablica();
    
    void operator=(const Tablica& t);
    
    void wypisz() const;
    int rozmiar() const;
    int& operator[](int idx);
    const int& operator[](int idx) const;
    
    void dodaj(int x);
private:
    
    void skopiuj(const Tablica& t);
    void usun();
    
    int* tab;
    int rozm;
    int pojemnosc;
};


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
    // w tym miejscu już mamy gwarancję, że rozm < pojemnosc
    
//     tab[rozm] = x;
//     rozm += 1;
    tab[rozm++] = x;
}

int main() {
    Tablica t{1};
    for (int i = 1; i < 1000000; i += 1) {
//         if (i % 1000 == 0) {
//             std::cout << i / 10000 << '.' << i / 1000 % 10 << "%\n";
//         }
        t.dodaj(i);
    }
//     t.wypisz();
    std::cout << t.rozmiar() << '\n';
}
