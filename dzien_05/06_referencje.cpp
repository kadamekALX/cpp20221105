#include <iostream>

struct Punkt {
    int x;
    int y;
};

void f(int& x) {
    x = -1;
}

//przekazywanie argumentów przez referecję omija potrzebę ich kopiowania.
//const referencja zabrania modyfikacji
void wypisz(const Punkt& p) {
    std::cout << "(" << p.x << ", " << p.y << ")" << '\n';
}

int main() {
    int x = 5;
    int* const wsk = &x;
    *wsk = 10;
    std::cout << x << '\n';
    
    int& y = x; // y jest referencją (aliasem) na x
//     int& z; // nie można stworzyć referencji bez przypisania jej do jakiejś zmiennej
    y = 20;
    std::cout << x << '\n';
    x = 30;
    std::cout << y << '\n';
    
    const int& k = x;
    x = 100;
    std::cout << k << '\n';
    
    f(y);
    std::cout << y << '\n';
    
    Punkt p;
    p.x = 1;
    p.y = 2;
    wypisz(p);
}
