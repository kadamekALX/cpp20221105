#include <iostream>

struct Punkt {
    int x;
    int y;
    
    void metoda() {
        std::cout << "Metody to funkcje ummiesczone wewnatrz struktur.\n";
        std::cout << "Metoda ma zawsze dostęp do obiektu, na ktorym zostala wywolana\n";
        std::cout << "x = " << x << '\n'; //ten `x` odnosi się do pola `x` w Punkcie, na którym wywolalismy metodę
        wypisz(); // wywołanie metody wewnątrz metody jest domyślnie wykonywane na tym samym obiekcie
    }
    
    void wypisz() {
        std::cout << x << ", " << y << '\n';
    }
}; //Punkt



int main() {
    Punkt p;
    p.x = 10;
    p.y = 20;
    p.metoda();
}
