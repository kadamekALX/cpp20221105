#include <iostream>

class Tablica {
public:
    Tablica(int n);
    Tablica(const Tablica& t); // konstruktor kopiujący - tworzy nowy obiekt na podstawie istniejącego
    ~Tablica();
    
    void operator=(const Tablica& t); // kopiujący operator przypisania - zmienia _istniejący_ obiekt na podstawie istniejącego obiektu
    
    void wypisz() const;
    int rozmiar() const;
    int& daj(int idx);
    const int& daj(int idx) const; //przeładowanie metody po 'const' - constowa wersja zostanie wywołana tylko na const obiektach
private:
    
    void skopiuj(const Tablica& t);
    void usun(); //metoda prywatna
    int* tab;
    int rozm;
};


Tablica::Tablica(int n) {
    tab = new int[n];
    rozm = n;
    for (int i = 0; i < n; i += 1) {
        tab[i] = 0;
    }
}

Tablica::Tablica(const Tablica& t) {
    std::cout << "konstruktor kopiujacy\n";
    skopiuj(t);
}

void Tablica::operator=(const Tablica& t) {
    std::cout << "kopiujacy operator przypisania\n";
    if (this == &t) {
        std::cout << "Samoprzypisanie!\n";
        return;
    }
    usun();
    skopiuj(t);
}

Tablica::~Tablica() { //destruktor
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

int& Tablica::daj(int idx) {
//     std::cout << "nieconst daj\n";
    return tab[idx];
}

const int& Tablica::daj(int idx) const {
//     std::cout << "const daj\n";
    return tab[idx];
}

void Tablica::skopiuj(const Tablica& t) {
    rozm = t.rozm; // ustawiamy rozmiar na taki sam jak w tablicy t
    tab = new int[rozm];
    for (int i = 0; i < rozm; i += 1) {
        tab[i] = t.tab[i];
    }
}

void Tablica::usun() {
    delete[] tab;
}

void wypisz_ladnie(const Tablica& tab) {
    std::cout << '[';
    for (int i = 0; i < tab.rozmiar(); i += 1) {
        if (i > 0)
            std::cout << ", ";
        std::cout << tab.daj(i);
    }
    std::cout << "]\n";
}

int main() {
    Tablica t{5};
    t.daj(3) = 13;
    t.wypisz();
    std::cout << t.daj(3) << '\n';
    wypisz_ladnie(t);
}
