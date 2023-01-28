//Napisz funkcję max, która przyjmie 2 inty i zwróci większy z nich
#include <iostream>

double max(double a, double b) {
    std::cout << "double\n";
    if (a > b)
        return a;
    return b;
}

int max(int a, int b) {
    std::cout << "int\n";
    if (a > b)
        return a;
    return b;
}

char max(char a, char b) {
    std::cout << "char\n";
    if (a > b)
        return a;
    return b;
}

// 1. Jeżeli istnieje wariant funkcji przyjmujący dokładnie takie argumenty jak zostały przekazane to zostanie on uruchomiony.
// 2. Jeżeli taki wariant nie istnieje to dopuszczamy max 1 konwersję typu per argument i patrzymy czy jakiś wariant zacznie pasować. Jeżeli pasuje DOKŁADNIE 1 to on zostanie uruchomiony, a w przciwnym przypadku dostaniemy błąd.

int main() {
    std::cout << max(3, 5) << '\n';
    std::cout << max(7, 5) << '\n';
    std::cout << max(2.71, 3.14) << '\n';
    std::cout << max(1300000000, 1300000001) << '\n';
    std::cout << max(static_cast<double>(15), 17.5) << '\n'; // konieczna konwersja, żeby usunąć niejednoznaczność
    std::cout << max('B', 'a') << '\n';
}
