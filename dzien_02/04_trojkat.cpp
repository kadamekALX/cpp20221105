// Przyjmij liczbę N i wypisz na ekran trójkat o wysokości N, złożony ze znaków '#'.
// Dla N = 4:

// Wersja megaprosta:
// ####
// ####
// ####
// ####

// Wersja łatwiejsza:
// #
// ##
// ###
// ####

// Wersja trudniejsza:
//    #
//   ###
//  #####
// #######

#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;

    for (int wiersz = 0; wiersz < n; wiersz += 1) {
//         wypisz wiersz dlugosci n
        for (int i = 0; i < n; i += 1) {
            std::cout << "#";
        }
        std::cout << "\n";
    }

    std::cout << "---------\n";

    for (int wiersz = 0; wiersz < n; wiersz += 1) {
//         wypisz wiersz dlugosci `wiersz + 1`
        for (int i = 0; i < wiersz + 1; i += 1) {
            std::cout << "#";
        }
        std::cout << "\n";
    }
    
    std::cout << "---------\n";
    
// 0:   #
// 1:  ###
// 2: #####
// 3:#######
    
    for (int wiersz = 0; wiersz < n; wiersz += 1) {
//      wypisz `n - wiersz - 1` spacji
        for (int i = 0; i < n - wiersz - 1; i += 1) {
            std::cout << " ";
        }
        
//      wypisz wiersz dlugosci `2 * wiersz + 1`
        for (int i = 0; i < 2 * wiersz + 1; i += 1) {
            std::cout << "#";
        }
        std::cout << "\n";
    }
    
    
}
