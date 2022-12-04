#include <iostream>
#include <cstdlib> //std::rand(), std::srand()
#include <ctime> //std::time()

int main() {
    std::srand(std::time(nullptr)); //ustawiamy ziarno generatora liczb losowych
    
//     std::cout << std::time(nullptr) << '\n'; // std::time() zwraca liczbę sekund od 1.01.1970 00:00
    
    int x = std::rand() % 6 + 1;
    std::cout << x << '\n';
//     std::cout << std::rand() << '\n';
//     std::cout << std::rand() << '\n';

}
