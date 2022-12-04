// Stworz strukturę Ulamek (licznik i mianownik) oraz napisz funkcje:
//     - void wypisz(const Ulamek& u)
//     - Ulamek stworz(int a, int b) - tworzy Ulamek o liczniku a i mianowniku b
//     - Ulamek mnoz(const Ulamek& a, const Ulamek& b) - zwraca wynik możenia Ulamkow a i b
#include <iostream>

struct Ulamek {
    int licznik;
    int mianownik;
};

void wypisz(const Ulamek& u) {
    std::cout << u.licznik << '/' << u.mianownik << '\n';
}

Ulamek stworz(int a, int b) {
    Ulamek u;
    u.licznik = a;
    u.mianownik = b;
    return u;
}

Ulamek mnoz(const Ulamek& a, const Ulamek& b) {
    Ulamek c = stworz(a.licznik * b.licznik, a.mianownik * b.mianownik);
    return c;
}

int main() {
    Ulamek a = stworz(1, 2);
    Ulamek b = stworz(2, 3);
    wypisz(a);
    wypisz(b);
    wypisz(mnoz(a, b));
}
