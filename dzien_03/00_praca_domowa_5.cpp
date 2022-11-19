// 5. Wypisz liczby całkowite od 1 do 100, ale:
//  - Zamiast podzielnych przez 3 wypisz "Hopsasa"
//  - Zamiast podzielnych przez 5 wypisz "Tralala"
//  - Zamiast podzielnych przez 3 i przez 5 wypisz "HopsasaTralala" (to również wynika z powyższych zasad).
// Początek wyniku tego programu powinien wyglądać tak:
// 1
// 2
// Hopsasa
// 4
// Tralala
// Hopsasa
// 7
// 8
// Hopsasa
// Tralala
// 11
// Hopsasa
// 13
// 14
// HopsasaTralala
// 16
// ...
#include <iostream>

int main() {
    for (int i = 1; i <= 100; i += 1) {
        bool czy_cos_wypisalismy = false;
        if (i % 3 == 0) {
            std::cout << "Hopsasa";
            czy_cos_wypisalismy = true;
        }
        if (i % 5 == 0) {
            std::cout << "Tralala";
            czy_cos_wypisalismy = true;
        }
        if (i % 7 == 0) {
            std::cout << "Bum";
            czy_cos_wypisalismy = true;
        }
        
        if (!czy_cos_wypisalismy) /* czy_cos_wypisalismy == false*/ {
            std::cout << i;
        }
        
        std::cout << "\n";
    }
}
