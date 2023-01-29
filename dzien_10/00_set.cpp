#include <iostream>
#include <set>

int main() {
    std::set<int> zbior; //std::set przechowuje unikalne elementy
    zbior.insert(30);
    zbior.insert(20);
    zbior.insert(10);
    zbior.insert(10);
    zbior.insert(10);
    std::cout << "Rozmiar zbioru: " << zbior.size() << '\n';
    for (int x : zbior) {
        std::cout << x << '\n';
    }
    int k;
    std::cin >> k;
    auto it = zbior.find(k);
    if (it != zbior.end()) {
        std::cout << "Znaleziono element" << *it << "\n";
    }
    else {
        std::cout << "Brak elementu!\n";
    }
}
