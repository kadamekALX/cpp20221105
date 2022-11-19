// Napisz funkcję, która policzy silnię z liczby n

// n! = 1 * 2 * 3 * ... * n

// Równoważna definicja:
// 0! = 1
// n! = n * (n - 1)!

#include <iostream>

int silnia(int n) {
    if (n == 0)
        return 1;
    return n * silnia(n - 1);
}

int main() {
    int x;
    std::cin >> x;
    std::cout << x << "! = " << silnia(x) << "\n";
}
