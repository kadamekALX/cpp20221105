//przyjmij liczbę N i wypisz wiersz złożony z N znaków '#'
//dla N = 6 wypisujemy
//######
#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;
    
    for (int i = 0; i < n; i += 1) {
        std::cout << "#";
    }
    std::cout << "\n";
}
