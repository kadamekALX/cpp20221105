//Napisz funkcję, która zwróci informację ile rozwiązań posiada równanie
//0 = ax + b (dla nieskończenie wielu zwróć -1)
// Jeśli istnieje dokładnie 1 rozwiązanie to wpisz je pod adres `rozw`
#include <iostream>

int rownanie_liniowe(double a, double b, double* rozw) {
    if (a != 0.0) {
        if (rozw != nullptr)
            *rozw = -b / a;
        return 1;
    }
    else if (b != 0.0) { // tu już wiemy, że a == 0
        return 0;
    }
    else {
        return -1;
    }
}

int main() {
    double a = 0.0;
    double b = 0.0;
    double r = 0.0;
    std::cout << "Podaj a: ";
    std::cin >> a;
    std::cout << "Podaj b: ";
    std::cin >> b;
    int ile = rownanie_liniowe(a, b, &r);
    if (ile == 1) {
        std::cout << "Rozwiazanie = " << r << "\n";
    }
    else if (ile == 0) {
        std::cout << "Brak rozwiazan\n";
    }
    else {
        std::cout << "Nieskonczenie wiele rozwiazan\n";
    }
}
