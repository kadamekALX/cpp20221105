#include <iostream>

class Tablica {
public:
    Tablica(int n);
    ~Tablica();
    
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
    int n;
    std::cin >> n;
    Tablica t{n};
    
    t.wypisz();
    t.ustaw(1, 123);
    std::cout << t.daj(1) << '\n'; // 123
    t.ustaw(3, 15);
    t.wypisz(); 
}
