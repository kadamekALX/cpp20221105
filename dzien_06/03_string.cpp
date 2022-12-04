#include <iostream>
#include <string> //std::string

// 'a' - 'A'

//Napisz funkcję pokemonizer(std::string& s), która w napisie s zamieni litery na parzystych pozycjach na wielkie, a na nieparzystych pozycjach na małe.
// pokemon -> PoKeMoN
void pokemonizer(std::string& s) {
    for (int i = 0; i < s.length(); i += 1) {
        if (i % 2 == 0 && s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 'a' - 'A';
        }
        if (i % 2 != 0 && s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 'a' - 'A';
        }
    }
}

int main() {
    std::string s;
    std::cin >> s;
    std::cout << s << '\n';
    s[0] = 'A';
    std::cout << s << '\n';
    for (int i = 0; i < s.length(); i += 1) {
        std::cout << s[i] << ' ';
    }
    std::cout << '\n';
    s += " i psa";
    s.push_back('!');
    std::cout << s << '\n';
    pokemonizer(s);
    std::cout << s << '\n';
}
