// Napisz funkcję suma_dzielnikow(), która policzy sumę dzielników podanego argumentu mniejszych od niego samego
// 
// suma_dzielnikow(8) == 7 // 1 + 2 + 4

#include <iostream>

//forward declaration
int suma_dzielnikow(int x);

int main() {
    int a;
    std::cin >> a;
    std::cout << suma_dzielnikow(a) << "\n";
}

int suma_dzielnikow(int x) {
    int suma = 0;
    for (int i = 1; i < x; i += 1) {
        if (x % i == 0)
            suma += i;
    }
    return suma;
}
