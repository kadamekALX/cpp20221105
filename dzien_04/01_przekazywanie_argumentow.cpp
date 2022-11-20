#include <iostream>

// w C/C++ argumenty domyślnie przekazywane są przez kopię (pass by copy)
// to oznacza, że każdy argument do funkcji jest kopiowany na jej potrzeby
void f(int a) {
    a = 20;
}

// do funkcji `g` jest przekazywana kopia jakiegoś adresu inta
// adres pozwala nam na modyfikację wartości, na którą wskazuje
void g(int* b) {
    *b = 30;
}

void dajWspolrzedne(double* x, double* y) {
    *x = 44.575;
    *y = 13.654;
}

int main() {
    int x = 10;
    f(x); // wartość `x` jest kopiowana do argumentu `a` w funkcji `f`
    std::cout << x << "\n";
    
    g(&x); // do funkcji `g` przekazujemy adres `x`
    std::cout << x << "\n";
    
    double a = 0.0;
    double b = 0.0;
    dajWspolrzedne(&a, &b);
    std::cout << a << " " << b << "\n";
}
