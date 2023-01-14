#include <iostream>
#include "Tablica.hpp"

int main() {
    Tablica t{1};
    for (int i = 1; i < 2000000; i += 1) {
        if (i % 1000 == 0) {
            std::cout << i / 10000 << '.' << i / 1000 % 10 << "%\n";
        }
        t.dodaj(i);
    }
    std::cout << t.rozmiar() << '\n';
}
