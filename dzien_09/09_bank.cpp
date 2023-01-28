//Napisz program "bankowy", który bedzie przechowywal stan konta roznych uzytkownikow i w pętli nieskończonej pytał po kolei o nazwe uzytkownika i rodzaj operacji do wykonania. Dostepne rodzaje operacji:
// - stan_konta - wyswietla stan konta dla podanego użytkownika
// - wplac - przyjmuje od uzytkownika kwote i zwieksza jego stan konta o tyle samo.
// - wyplac - przyjmuje od uzytkownika kwote i, jeśli stan konta jest wystarczający, zmniejsza stan konta o tyle samo. Jeśli nie ma wystarczająco środków wypisz komunikat i nic nie wypłacaj.
// Do przechowywania informacji o stanie konta użyj obiektu typu std::map<std::string, int>

// Podaj nazwe usera:
// >Andrzej
// Podaj rodzaj operacji [stan_konta, wplac, wyplac]:
// >wplac
// Podaj kwote do wplaty:
// >100
// Wplacono 100 na konta uzytkownika Andrzej

#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<std::string, int> konto;
    while (true) {
        std::string user, op;
        std::cout << "Podaj nazwe uzytkownika:\n>";
        std::cin >> user;
        std::cout << "Podaj rodzaj operacji [stan_konta, wplac, wyplac]:\n>";
        std::cin >> op;
        if (op == "stan_konta") {
            std::cout << "Stan konta uzytkownika " << user << " wynosi " << konto[user] << " PLN.\n";
        }
        else if (op == "wplac") {
            int kwota;
            std::cout << "Podaj kwote do wplaty:\n>";
            std::cin >> kwota;
            konto[user] += kwota;
            std::cout << "Wplacono " << kwota << " na konto uzytkownika " << user << '\n';
        }
        else if (op == "wyplac") {
            //TODO praca domowa
        }
        else {
            std::cout << "Niepoprawna operacja!\n";
        }
    }
}

//TODO zadanie z gwiazdką - podanie użytkownika, którego nie ma w banku powinno wpierw zapytać, czy stworzyć dla niego nowe konto. Założenie nowego konta powinno przydzielić użytkownikowi sign-on bonus w wysokości 10 PLN.
