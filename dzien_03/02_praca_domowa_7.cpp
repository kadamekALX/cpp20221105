// 7. Przyjmij liczbę N, a następnie wypisz na ekran kwadrat złożony z zer i jedynek ułożonych tak, jak czarne i białe pola na szachownicy.
// Dla N = 4 wynikiem powinno być:
// 
// 0101
// 1010
// 0101
// 1010
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i += 1) {
        for (int j = 0; j < n; j += 1) {
            if ((i + j) % 2 == 0)
                std::cout << "X";
            else
                std::cout << "O";
        }
        std::cout << "\n";
    }
}
