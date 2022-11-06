//Przyjmij 3 liczby i wypisz największą z nich
#include <iostream>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a >> b >> c;
    
    if (a > b) {
        if (a > c) {
            std::cout << a;
        }
        else {
            std::cout << c;
        }
    }
    else {
        if (b > c) {
            std::cout << b;
        }
        else {
            std::cout << c;
        }
    }
    std::cout << "\n";
}
