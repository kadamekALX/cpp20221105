// Przyjmij liczbę i wypisz, czy ta liczba jest parzysta
#include <iostream>

int main() {
    int x = 0;
    std::cin >> x;
    if (0 == x % 2) // jeżeli reszta z dzielenia przez 2 jest rowna 0
    {
        std::cout << "Parzysta\n";
    }
    else {
        std::cout << "Nieparzysta\n";
    }
}
