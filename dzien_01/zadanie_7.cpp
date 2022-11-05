//przyjmij liczbę i wypisz sumę jej cyfr
#include <iostream>

int main() {
    int x;
    std::cin >> x;
    int suma = 0;
    
    while (x > 0) {
        suma += x % 10; // dodajemy ostatnią cyfrę liczby do sumy
        x /= 10; //usuwamy ostatnią cyfrę z liczby
    }
    
    std::cout << "Suma cyfr: " << suma << "\n";
}
