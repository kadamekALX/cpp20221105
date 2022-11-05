#include <iostream>

int main() {
    int licznik = 0;
    while (licznik < 10) {
        std::cout << "lol " << licznik << "\n";
        licznik += 1; //to samo co: licznik = licznik + 1;
    }
}
