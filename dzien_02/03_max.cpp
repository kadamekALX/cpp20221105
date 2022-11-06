//Przyjmij liczbę N, a następnie przyjmij N liczb i wypisz największą z nich
//Dane:
// 5
// 2 1 4 1 1
//Wynik:
// 4
#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;
    int max = 0;
    std::cin >> max; // pierwsza wprowadzona liczba od razu ląduje w zmiennej max
    
    // pozostałe n-1 liczb nowrmalnie porównujemy z max 
    for (int i = 1; i < n; i+= 1) {
        int x = 0;
        std::cin >> x;
        if (x > max) {
            max = x;
        }
    }
    std::cout << max << "\n";
}
