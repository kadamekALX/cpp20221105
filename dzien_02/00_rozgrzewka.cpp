//Przyjmij 3 liczby i wypisz największą z nich
#include <iostream>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a >> b >> c;
    
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    std::cout << max << "\n";
}
