#include <iostream>

int main() {
    // AND - &&
    std::cout << "(true && true) = " << (true && true) << "\n";
    std::cout << "(true && false) = " << (true && false) << "\n";
    std::cout << "(false && true) = " << (false && true) << "\n";
    std::cout << "(false && false) = " << (false && false) << "\n";
    std::cout << "-------------\n";
    
    // OR - ||
    std::cout << "(true || true) = " << (true || true) << "\n";
    std::cout << "(true || false) = " << (true || false) << "\n";
    std::cout << "(false || true) = " << (false || true) << "\n";
    std::cout << "(false || false) = " << (false || false) << "\n";
    std::cout << "-------------\n";
    
    //NOT - !
    std::cout << "(!true) = " << (!true) << "\n";
    std::cout << "(!false) = " << (!false) << "\n";
}
