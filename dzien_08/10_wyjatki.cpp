#include <iostream>

bool dzielenie(int a, int b, int* result) {
    if (b == 0) {
        std::cerr << "Nie dziel przez 0!\n";
        return false;
    }
    *result = a / b;
    return true;
}

int main() {
    int wynik;
    if (!dzielenie(5, 2, &wynik)) {
        std::cerr << "Blad!\n";
        return 1;
    }
    std::cout << wynik << '\n';
    if (!dzielenie(3, 0, &wynik)) {
        std::cerr << "Blad!\n";
        return 1;
    }
    std::cout << wynik << '\n';
}
