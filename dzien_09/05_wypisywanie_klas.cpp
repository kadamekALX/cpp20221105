#include <iostream>
#include <fstream> //ofstream / ifstream

class Ulamek {
public:
    Ulamek(int a, int b) : licznik{a}, mianownik{b} {}
    
    //zaprzyjaźnione funkcje mają dostęp do pól prywatnych
    friend std::ostream& operator<<(std::ostream& os, const Ulamek& u);
private:
    int licznik;
    int mianownik;
};

std::ostream& operator<<(std::ostream& os, const Ulamek& u) {
    os << u.licznik << '/' << u.mianownik;
    return os;
}

// a + b -> a.operator+(b)

int main() {
    Ulamek a{7, 12};
    std::cout << a << '\n';
//     std::ofstream plik{"wyjscie.txt"}; //ten obiekt w momencie tworzenia stworzy wyjscie.txt i będzie mógł do niego zapisywać
//     plik << "Ala ma kota\n" << "ulamek a = " << a << '\n';

//     std::ifstream ifs{"wyjscie.txt"};
//     char c;
//     for (int i = 0; i < 10; i += 1) {
//         ifs >> c;
//         std::cout << c << '\n';
//     }
    
}
