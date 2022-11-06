#include <iostream>

int main() {
    int i = 0;
    while (i < 10) {
        i += 1;
        if (i == 2)
            continue; //kończymy obecny obrót pętli (tzn. wracamy do sprawdzenia warunku)
        std::cout << i << "\n";
        if (i == 7)
            break; // przerywa działanie pętli, w której bezpośrednio się znajduje
    }
    
    for (int k = 10; k < 20; k += 1) {
        if (k == 13) {
            continue;
        }
        std::cout << k << "\n";
    }
}
