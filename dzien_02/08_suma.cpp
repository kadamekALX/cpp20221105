//Oblicz sumę z podanych przez użytkownik liczb.
//Przyjmuj liczby dopóki użytkownik nie poda 0
// 1 2 3 4 5 0
// Wynik: 15

#include <iostream>

int main() {
    int suma = 0;
    while (true) {
        int x = 0;
        std::cin >> x;
        if (x == 0)
            break;
        suma += x;
    }
    std::cout << "Suma: " << suma << "\n";
}
