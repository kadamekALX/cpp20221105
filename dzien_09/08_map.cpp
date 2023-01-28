#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<int, int> slownik;
    slownik[1] = 10;
    slownik[20] = 100;
    slownik[1000000] = 1000;
//     for (std::map<int, int>::iterator it = slownik.begin(); it != slownik.end(); it++) {
    for (auto it = slownik.begin(); it != slownik.end(); it++) {
        std::cout << it->first << ": " << it->second << '\n';
    }
    
    std::map<std::string, std::string> prezydent;
    prezydent["Polska"] = "Duda";
    prezydent["USA"] = "Biden";
    for (const auto& p : prezydent) {
        std::cout << p.first << " -> " << p.second << '\n';
    }
}

// template <typename T, typename U>
// struct pair {
//     T first;
//     U second;
// };
