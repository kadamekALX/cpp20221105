#include <iostream>

Napisz funkcję, która sprawdzi, czy podany napis składa się tylko z małych liter
bool czy_male_litery(const char* napis) {
    for (int i = 0; napis[i] != 0; i += 1) {
        if (napis[i] < 'a' || napis[i] > 'z') { //czy napis[i] NIE jest małą literą
            return false;
        }
    }
    return true;
}

//TODO praca domowa - dlaczego poniższe działa?
// bool czy_male_litery(const char* napis) {
//     while (*napis >= 'a' && *napis <= 'z') napis += 1;
//     return !*napis;
// }

int main() {
    std::cout << czy_male_litery("abcdef") << '\n';
    std::cout << czy_male_litery("yfhioQDHdswh3") << '\n';
}
