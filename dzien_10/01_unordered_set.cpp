#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> zbior;
    for (int i = 0; i < 100; i += 1) {
        int x = i * 10;
//         std::cin >> x;
        zbior.insert(x);
        for (int k : zbior)
            std::cout << k << ' ';
        std::cout << '\n';
    }
}

// Dostajemy tablicę liczb oraz jakąś liczbę N;
// Chcemy odpowiedzieć na pytanie czy jakieś 2 _różne_ liczby z tej tablicy sumują się do N
// 1. Sprawdzenie wszystkich par - O(n^2)

// czy dla pewnego X tablica zawiera liczbę (N - X)?
// 2. Sortujemy (O(nlogn)) i sprawdzamy obecność (N - X) dla każdego X w czasie O(logn) (binsearch)

// 3. Tworzymy unodered_set (ZBIOR) i dla każdego X sprawdzamy czy ZBIOR zawiera (N - X) (O(1)).
// Jeśli tak to mamy parę.
// Jeśli nie to dodajemy X do ZBIORu (O(1)) i przechodzimy do następnej liczby.
// Złożoność czasowa rozwiązania: O(n)
