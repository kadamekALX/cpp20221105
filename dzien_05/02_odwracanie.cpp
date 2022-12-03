//przyjmij liczbę N, zaalokuj pamięć na N wartości typu `double`, a następnie przyjmij N wartości i wypisz je w odwrotnej kolejności.
// Zadbaj o brak wycieku pamięci.
#include <iostream>

int main() {
    int n;
    std::cin >> n;
    double* tab = new double[n];
    
    for (int i = 0; i < n; i += 1) {
        std::cin >> tab[i];
    }
    
    for (int i = n - 1; i >= 0; i -= 1) {
        std::cout << tab[i] << ' ';
    }
    std::cout << '\n';
    
    delete[] tab;
}
