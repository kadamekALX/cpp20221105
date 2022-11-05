#include <iostream>

int main() {
//     bool - prawda/falsz (true/false)
    bool prawda = true;
    bool falsz = false;
    
    //operatory logiczne
    int a = 30;
    int b = 5;
    std::cout << a << " < " << b << " = " << (a < b) << "\n";
    std::cout << a << " <= " << b << " = " << (a <= b) << "\n";
    std::cout << a << " > " << b << " = " << (a > b) << "\n";
    std::cout << a << " >= " << b << " = " << (a >= b) << "\n";
    std::cout << a << " == " << b << " = " << (a == b) << "\n";
    std::cout << a << " != " << b << " = " << (a != b) << "\n";
    
//     std::cout << (15 < 7) << "\n";
//Składnia:
//     if (warunek) {
//         //to sie wykona jesli `warunek` jest `true`
//     }
//     else {
//         //to sie wykona jesli `warunek` jest `false`
//     }
    
    if (true) {
        std::cout << "Zawsze\n";
    }
    
    if (false) {
        std::cout << "Nigdy\n";
    }
    
    if (a < b) {
        std::cout << "a jest mniejsze od b\n";
    }
    else {
        std::cout << "a NIE jest mniejsze od b\n";
    }
    
}
