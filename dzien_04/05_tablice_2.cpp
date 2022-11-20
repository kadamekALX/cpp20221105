#include <iostream>

void wypisz_tablice(int* tab, int n) {
    std::cout << "[";
    for (int i = 0; i < n; i += 1) {
        if (i > 0)
            std::cout << ", ";
        std::cout << tab[i];
    }
    std::cout << "]\n";
}

int main() {
    int tab[5] = {10, 20, 30, 40, 50};
    
    std::cout << tab << "\n";
    std::cout << &tab[0] << "\n";
    std::cout << &tab[1] << "\n";
    std::cout << tab + 1 << "\n";
//     tab[i] jest tym samym co *(tab + i)
    std::cout << tab[2] << "\n";
    std::cout << *(tab + 2) << "\n";
    
    wypisz_tablice(tab, 5);
}
