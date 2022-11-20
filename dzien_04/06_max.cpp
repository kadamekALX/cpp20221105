//Napisz funkcję, która przyjmie tablicę intów (i jej rozmiar) i zwróci największy element z tej tablicy

#include <iostream>

int max(const int* tab, int rozmiar) {
    int maximum = tab[0];
    for (int i = 1; i < rozmiar; i += 1) {
        if (tab[i] > maximum)
            maximum = tab[i];
    }
    return maximum;
}

void wypisz_tablice(const int* tab, int n) {
    std::cout << "[";
    for (int i = 0; i < n; i += 1) {
        if (i > 0)
            std::cout << ", ";
        std::cout << tab[i];
    }
    std::cout << "]\n";
}

int main() {
    int tab[10] = {4, 6, 8, 3, 5};
    wypisz_tablice(tab, 10);
    for (int i = 5; i < 10; i += 1)
        std::cin >> tab[i];
    wypisz_tablice(tab, 10);
    std::cout << "Najwiekszy element: " << max(tab, 10) << "\n";
    wypisz_tablice(tab, 10);
}
