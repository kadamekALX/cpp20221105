#include <iostream>
#include <iomanip>

int main() {
    if (1.0 + 1.0 == 2.0)
        std::cout << "OK 1\n";
    if (0.1 + 0.1 == 0.2)
        std::cout << "OK 2\n";
    if (1.0 + 1.0 + 1.0 == 3.0)
        std::cout << "OK 3\n";
    if (0.1 + 0.1 + 0.1 == 0.3)
        std::cout << "OK 4\n";
    if (0.125 + 0.125 == 0.25)
        std::cout << "OK 5\n";
    if (0.125 + 0.125 + 0.125 == 0.375)
        std::cout << "OK 6\n";
    
    std::cout << std::setprecision(30) << 0.1 << "\n";
    std::cout << 0.2 << "\n";
    std::cout << 0.3 << "\n";
    std::cout << 3 * 0.1 << "\n";
    std::cout << std::fixed << 0.125 << "\n";
}
