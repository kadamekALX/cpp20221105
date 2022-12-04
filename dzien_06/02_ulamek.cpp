#include <iostream>

struct Ulamek {
    int licznik;
    int mianownik;

    // const po nawiasach oznacza, że ta metoda nie modyfikuje obiektu, na którym jest wywoływana.
    // Na const obiektach można wywoływać tylko const metody
    void wypisz() const {
        std::cout << licznik << '/' << mianownik << '\n';
    }
    
    void inicjalizuj(int a, int b) {
        licznik = a;
        mianownik = b;
    }
    
    Ulamek mnoz(const Ulamek& b) const {
        Ulamek c;
        c.inicjalizuj(licznik * b.licznik, mianownik * b.mianownik);
        return c;
    }
}; //Ulamek

int main() {
    Ulamek asdf;
    asdf.inicjalizuj(1, 2);
    Ulamek b;
    b.inicjalizuj(2, 3);
    asdf.wypisz();
    b.wypisz();
    Ulamek c = asdf.mnoz(b);
    c.wypisz();
}
