#include <iostream>

int main() {
    // to jest komentarz
    
    // int - liczby całkowite
    std::cout << "Liczba calkowita: " << 5 << "\n";
    
    // double - liczby rzeczywiste
    std::cout << "Liczba rzeczywista: " << 3.14 << "\n";
    
    std::cout << 2 + 2 * 2 << "\n";
    
    //działania
    std::cout << "7 + 3 = " << 7 + 3 << "\n";
    std::cout << "7 - 3 = " << 7 - 3 << "\n";
    std::cout << "7 * 3 = " << 7 * 3 << "\n";
    std::cout << "7 / 3 = " << 7 / 3 << "\n";
    std::cout << "7 % 3 = " << 7 % 3 << "\n";
    std::cout << "7 / 3.0 = " << 7 / 3.0 << "\n";

    //zmienne
    int calkowita = 5; //deklaracja zmiennej `calkowita`
    std::cout << calkowita << "\n";
    
    int a = 1;
    int b = 6;
    std::cout << a << " + " << b << " = " << a + b << "\n";
    
    calkowita = 10;
    std::cout << "calkowita = " << calkowita << "\n";
    calkowita = calkowita + 3;
    std::cout << "calkowita = " << calkowita << "\n";
    calkowita = calkowita + 4.7;
    std::cout << "calkowita = " << calkowita << "\n";
    
    double rzeczywista = calkowita + 6.3;
    std::cout << "rzeczywista = " << rzeczywista << "\n";
    
}
