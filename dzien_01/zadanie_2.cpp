// Przyjmij 3 liczby: a, b i c, gdzie:
// `a` i `b` oznaczają odpowiednio godzinę i minutę obecne wyświetlaną na zegarze elektronicznym
// Wypisz godzinę (i minutę) jaka będzie wyświetlona na zegarze po upływie `c` minut.
// Przykładowo, dla danych:
// 16 57 5
// Powinno zostać wyświetlone:
// 17 2
#include <iostream>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a >> b >> c;
    std::cout << "Obecnie jest godzina " << a << ":" << b << "\n";
    
    int suma_minut = b + c;
    int nowe_minuty = suma_minut % 60;
    int nowe_godziny = a + suma_minut / 60;
    nowe_godziny = nowe_godziny % 24;
    
    std::cout << "Po uplynieciu " << c << " minut bedzie godzina " << nowe_godziny << ":" << nowe_minuty << "\n";
}
