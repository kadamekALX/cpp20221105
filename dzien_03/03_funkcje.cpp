#include <iostream>

// Składnia:
// TYP_ZWRACANY NAZWA(TYP_ARG1 ARG1, TYP_ARG2 ARG2, ...) {
//     tresc funkcji
// }

// void - typ oznaczający brak zwracanej wartości
void hello() {
    std::cout << "Hello!!\n";
}

void argument(int a) {
    //wewnatrz tej funkcji zmienna `a` jest już zdefiniowana
    std::cout << "Argument = " << a << "\n";
}

void dwa_argumenty(int a, int b) {
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
}

int nastepnik(int x) {
    return x + 1; //return zwraca wartość wyrażenia jako wynik funkcji i kończy jej działanie
    //WAŻNE: jeżeli typ zwarcany nie jest void to funkcja MUSI zawsze skończyć się returnem
}

int main() {
    hello(); // wywołanie funkcji hello
    std::cout << "hej\n";
    hello();
    argument(10);
    argument(20);
    int x = 13;
    argument(x);
    dwa_argumenty(12, 34);
    int a = nastepnik(0); //przypisujemy wynik funkcji do zmiennej `a`
    std::cout << a << "\n";
    std::cout << 10 + nastepnik(0) << "\n";
    std::cout << nastepnik(nastepnik(0)) << "\n";
    
    int tmp = 0;
    for (int i = 0; i < 3; i += 1) {
        std::cout << tmp << "\n";
        tmp = nastepnik(tmp);
    }
    return 0;
}
