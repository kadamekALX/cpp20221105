// Przyjmij liczbę i wypisz, czy jest większa od 0, mniejsza od 0, czy równa 0

#include <iostream>

int main() {
    int x;
    std::cin >> x;
    if (x > 0) {
        std::cout << "x > 0\n";
    }
    else { //tu wejdziemy jeśli x <= 0
        if (x < 0) {
            std::cout << "x < 0\n";
        }
        else { //x == 0
            std::cout << "x == 0\n";
        }
    }
}
