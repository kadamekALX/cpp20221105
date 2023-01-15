#include <iostream>
#include <vector>

class A {
public:
    A() {
        std::cout << "A()\n";
    }
    ~A() {
        std::cout << "~A()\n";
    }
};

int dzielenie(int a, int b) {
    if (b == 0) {
//         throw "Podzielono przez 0!";
        throw 42;
    }
    return a / b;
}

int main() {
    try {
        A a;
        std::cout << dzielenie(5, 2) << '\n';
        std::cout << dzielenie(3, 0) << '\n';
    }
    catch (const char* str) {
        //tu robimy obsługę wyjątku
        std::cout << "Blad: " << str << '\n';
    }
    catch (int x) {
        std::cout << "Zlapalem int " << x << '\n';
    }
//     catch (...) { // ten catch złapie wszystko. Raczej nie stosujemy, bo jeśli nie byliśmy gotowi na jakiś wyjątek to nie wiemy jak go obsłużyć
//         std::cout << "Zlapalem COŚ\n";
//         throw; // throw wewnątrz catch rzuci dalej ten sam wyjątek, który został złapany
//     }
    
    std::cout << "program dziala dalej...\n";
    
    std::vector<int> tab;
    std::cout << tab.at(3) << '\n'; // std::out_of_range
}
