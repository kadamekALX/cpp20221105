//  latami przestępnymi są te, których numeracja:
// 
//     jest podzielna przez 4 i niepodzielna przez 100 lub
//     jest podzielna przez 400
//     
// Napisz program, który stwierdzi, czy podany rok jest rokiem przestępnym

#include <iostream>

int main() {
    int rok;
    std::cout << "Podaj rok:";
    std::cin >> rok;
    if (rok % 4 == 0 && rok % 100 != 0 || rok % 400 == 0) {
        std::cout << "Przestepny\n";
    }
    else {
        std::cout << "Zwykly\n";
    }
}
