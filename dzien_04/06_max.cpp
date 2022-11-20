//Napisz funkcję, która przyjmie tablicę intów (i jej rozmiar) i zwróci największy element z tej tablicy

#include <iostream>

int max(int* tab, int rozmiar) {
    int maximum = tab[0];
    for (int i = 1; i < rozmiar; i += 1) {
        if (tab[i] > maximum)
            maximum = tab[i];
    }
    return maximum;
}

int main() {
    int tab[5] = {4, 6, 8, 3, 5};
    for (int i = 0; i < 5; i += 1)
        std::cin >> tab[i];
    std::cout << "Najwiekszy element: " << max(tab, 5) << "\n";
}
