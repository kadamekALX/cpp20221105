#include <iostream>

class Tablica {
public:
    Tablica(int n);
    Tablica(const Tablica& t); // konstruktor kopiujący - tworzy nowy obiekt na podstawie istniejącego
    ~Tablica();
    
    void operator=(const Tablica& t); // kopiujący operator przypisania - zmienia _istniejący_ obiekt na podstawie istniejącego obiektu
    
    void wypisz() const;
    int rozmiar() const;
    void ustaw(int idx, int wartosc);
    int daj(int idx) const;
private:
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
    rozm = t.rozm; // ustawiamy rozmiar na taki sam jak w tablicy t
    tab = new int[rozm];
    for (int i = 0; i < rozm; i += 1) {
        tab[i] = t.tab[i];
    }
}

void Tablica::operator=(const Tablica& t) {
    std::cout << "kopiujacy operator przypisania\n";
    //TODO uzupelnic
}

Tablica::~Tablica() { //destruktor
    delete[] tab;
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

void Tablica::ustaw(int idx, int wartosc) {
    tab[idx] = wartosc;
}

int Tablica::daj(int idx) const {
    return tab[idx];
}

int main() {
    Tablica t{5};
    t.ustaw(0, 10);
    Tablica q{t};
    q.ustaw(1, 20);
    Tablica w = q; //to samo co: Tablica w{q};
    w.ustaw(2, 30);
    t.wypisz();
    q.wypisz();
    w.wypisz();
    t = w; // tu nie zostanie wywołany konstruktor kopiujacy! To wywoła: t.operator=(w)
    t.wypisz();
    
}
