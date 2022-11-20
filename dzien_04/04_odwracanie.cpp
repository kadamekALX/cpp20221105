// napisz program, który przyjmie od użytkownika 10 liczb i wypisze je w odwrotnej kolejności
// 1 2 3 -> 3 2 1
#include <iostream>

int main() {
    const int ROZMIAR = 10;
    int tab[ROZMIAR];
    
    for (int i = 0; i < ROZMIAR; i += 1) {
        std::cin >> tab[i];
    }
    
    for (int i = ROZMIAR - 1; i >= 0; i -= 1) {
        std::cout << tab[i] << " ";
    }
    std::cout << "\n";
}
