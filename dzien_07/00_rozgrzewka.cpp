// Napisz klasę Tablica, która będzie przechowywać 5 intów.
// Stworzenie obiektu tej klasy powinno ustawiać wszsytkie przechowywanie elemety na 0
// Klasa powinna posiadać metody pozwalające na
//  - pobranie n-tego elementu
//  - ustawienie n-tego elementu
//  - wypisanie całej tablicy
#include <iostream>

class Tablica {
public:
    Tablica() {
        for (int i = 0; i < 5; i += 1) {
            tab[i] = 0;
        }
    }
    
    void wypisz() const {
        for (int i = 0; i < 5; i += 1) {
            std::cout << tab[i] << ' ';
        }
        std::cout << '\n';
    }
    
    void ustaw(int idx, int wartosc) {
        tab[idx] = wartosc;
    }
    
    int daj(int idx) const {
        return tab[idx];
    }
private:
    int tab[5];
};

int main() {
    Tablica t;
    t.wypisz(); // 0 0 0 0 0
    t.ustaw(1, 123);
    std::cout << t.daj(1) << '\n'; // 123
    t.ustaw(3, 15);
    t.wypisz(); // 0 123 0 15 0
}
