// Napisz funkcję, która policzy silnię z liczby n

// n! = 1 * 2 * 3 * ... * n

#include <iostream>

int silnia(int n) {
    int iloczyn = 1;
    for (int i = 1; i <= n; i += 1) {
        iloczyn *= i;
    }
    return iloczyn;
}

int main() {
    int x;
    std::cin >> x;
    std::cout << x << "! = " << silnia(x) << "\n";
}
