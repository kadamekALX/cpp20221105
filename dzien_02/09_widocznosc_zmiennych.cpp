#include <iostream>

// Zmienna istnieje dopóki nie skończy się blok (klamerki), w którym została zadeklarowana.

int zero; //zmienna globalna jest inicjalizowana na 0.

int main() {
    int x = 13;
    std::cout << "x = " << x << "\n";
    
    {
        int y = 7;
        int x = 15; //ten `x` przysłania zmienną `x` z zewnętrznego bloku - w obrębie tego bloku nazwa `x` będzie odnosić się to tego inta, a jak ten blok się zakończy to odzyskamy dostęp do poprzedniego `x`.
        std::cout << "y = " << y << "\n";
        std::cout << "x = " << x << "\n";
    }
    
    
    std::cout << "x = " << x << "\n";
//     std::cout << "y = " << y << "\n"; //tu `y` nie istnieje
}
