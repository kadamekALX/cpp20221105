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


//Napisz program "bankowy", który bedzie przechowywal stan konta roznych uzytkownikow i w pętli nieskończonej pytał po kolei o nazwe uzytkownika i rodzaj operacji do wykonania. Dostepne rodzaje operacji:
// - stan_konta - wyswietla stan konta dla podanego użytkownika
// - wplac - przyjmuje od uzytkownika kwote i zwieksza jego stan konta o tyle samo.
// - wyplac - przyjmuje od uzytkownika kwote i, jeśli stan konta jest wystarczający, zmniejsza stan konta o tyle samo. Jeśli nie ma wystarczająco środków wypisz komunikat i nic nie wypłacaj.
// Do przechowywania informacji o stanie konta użyj obiektu typu std::map<std::string, int>
