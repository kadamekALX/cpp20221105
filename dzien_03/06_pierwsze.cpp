// Napisz funkcję czy_pierwsza(), która sprawdzi, czy podany argument jest liczbą pierwszą.

#include <iostream>

bool czy_podzielne(int n, int k) {
    return n % k == 0;
}

int suma_dzielnikow(int x) {
    int suma = 0;
    for (int i = 1; i < x; i += 1) {
        if (x % i == 0)
            suma += i;
    }
    return suma;
}

bool czy_pierwsza(int n) {
//     return suma_dzielnikow(n) == 1;
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    
    for (int i = 3; i < n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n = 1000000007;
//     std::cin >> n;
    if (czy_pierwsza(n)) {
        std::cout << "Pierwsza\n";
    }
}

// 1000000007
