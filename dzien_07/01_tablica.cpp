// Napisz klasę Tablica, która będzie przechowywać N intów, gdzie N jest argumentem przekazanym do konstuktora

#include <iostream>

class Tablica {
public:
    Tablica(int n) {
        tab = new int[n];
        rozm = n;
        for (int i = 0; i < n; i += 1) {
            tab[i] = 0;
        }
    }
    
    void zwolnij() { // po wywołaniu .zwolnij() nie możemy juz korzystac z obiektu
        delete[] tab;
    }
    
    void wypisz() const {
        for (int i = 0; i < rozm; i += 1) {
            std::cout << tab[i] << ' ';
        }
        std::cout << '\n';
    }
    
    int rozmiar() const {
        return rozm;
    }
    
    void ustaw(int idx, int wartosc) {
        tab[idx] = wartosc;
    }
    
    int daj(int idx) const {
        return tab[idx];
    }
private:
    int* tab;
    int rozm;
};

int main() {
    int n;
    std::cin >> n;
    Tablica t{n};
    for (int i = 0; i < t.rozmiar(); i += 1)
        t.ustaw(i, i);
    t.wypisz(); // 0 0 0 0 0 0 0
    t.ustaw(1, 123);
    std::cout << t.daj(1) << '\n'; // 123
    t.ustaw(3, 15);
    t.wypisz(); // 0 123 0 15 0 0 0
    t.zwolnij();
}
