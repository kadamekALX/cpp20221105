#include <iostream>

bool czy_mala_litera(char c) {
    return c >= 'a' && c <= 'z';
}

int main() {
    // char to tak naprawdę mały int (1 bajt), więc możemy na nim wykonywać takie same działania jak na zwykłych intach
    char znak = 'a';
    std::cout << znak << '\n';
    char c = 66 - 1;
    std::cout << c << '\n';
    std::cout << "sizeof(char) = " << sizeof(char) << '\n';
    
    std::cout << "napis\n"; // napis w cudzysłowie zawsze kończy się znakiem o wartości 0
//     char tab[6] = {'a', 'b', 'c', 'd', 'e', 0};
    char tab[] = "abcde"; //jeżeli inicjalizujemy tablicę jakimiś wartościami to możemy pominąć jej rozmiar przy deklaracji
    tab[3] = 'G';
    std::cout << tab << '\n';
}
