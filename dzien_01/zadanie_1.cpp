// 1. Przyjmij liczbę całkowitą i wypisz:
// - jej resztę z dzielenia przez 3
// - wynik poniesienia tej liczby do kwadratu
// - cyfrę jedności tej liczby
// - cyfrę dziesiątek tej liczby

#include <iostream>

int main() {
    int zmienna = 0;
    std::cin >> zmienna;
    std::cout << "Reszta z dzielenia przez 3: " << zmienna % 3 << "\n";
    std::cout << "Kwadrat: " << zmienna * zmienna << "\n";
    std::cout << "Cyfra jednosci: " << zmienna % 10 << "\n";
    std::cout << "Cyfra dziesiatek: " << zmienna / 10 % 10 << "\n";
}
