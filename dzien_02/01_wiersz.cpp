//przyjmij liczbę N i wypisz wiersz złożony z N znaków '#'
//dla N = 6 wypisujemy
//######
#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;
    
    int i = 0;
    while (i < n) {
        std::cout << "#";
        i += 1;
    }
    std::cout << "\n";
}
