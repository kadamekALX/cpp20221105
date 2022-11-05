// przyjmij liczbę i wypisz, czy znajduje się ona w przedziale
// [10; 20)
#include <iostream>

int main() {
    int x;
    std::cin >> x;
    if (x >= 10) {
        if (x < 20) {
            std::cout << "W przedziale\n";
        }
        else {
            std::cout << "Poza przedzialem\n";
        }
    }
    else {
        std::cout << "Poza przedzialem\n";
    }
}
