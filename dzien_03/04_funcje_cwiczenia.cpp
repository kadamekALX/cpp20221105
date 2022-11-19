// 1. Napisz funkcje bezwzgledna(int x), która zwróci wartość bezwzględną z argumentu x
// 
// bezwzgledna(5) == 5
// bezwzgledna(-3) == 3

// 2. Napisz funkcję maks(int a, int b), która zwróci większy spośród argumentów
// 
// maks(5, 3) == 5
// maks(3, 5) == 5
// maks(5, 5) == 5

#include <iostream>

int bezwzgledna(int x) {
//     if (x < 0)
//         return -x;
//     return x; //else tu jest zbędny
    
//     if (x < 0)
//         x = -x;
//     return x;

//  operator trójargumentowy (?:) :    
//   warunek ? wartosc_jesli_prawda : wartość_jeśli_fałsz
    return x < 0 ? -x : x;
}

int maks(int a, int b) {
//     return a > b ? a : b;
    
    if (a > b)
        return a;
    return b;
}

int main() {
    std::cout << bezwzgledna(5) << "\n";
    std::cout << bezwzgledna(-3) << "\n";
    std::cout << maks(5, 3) << "\n";
    std::cout << maks(3, 5) << "\n";
    std::cout << maks(5, 5) << "\n";
}
