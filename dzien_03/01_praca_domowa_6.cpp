// 6. Przyjmij liczbę N, a następnie wypisz jej cyfry w jednym wierszu (w dowolnej kolejności), rozdzielone przecinkami.
// Zadbaj, aby nie było "wiszącego" przecinka na końcu wiersza (tzn. dla 123 chcemy wypisać "3,2,1", a nie "3,2,1,").

#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;
    
    if (n < 0)
        n = -n;
    
    while (n > 10) {
        std::cout << n % 10 << ",";
        n /= 10; // n = n / 10;
    }
    std::cout << n << "\n";
}
