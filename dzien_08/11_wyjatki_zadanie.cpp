// Napisz własną klasę wyjątków dziedziczącą po std::exception.
// Wyjątek powinien zostać rzucony w momencie próby stworzenia obiektu Ulamek z mianownikiem równym 0.
// Zadbaj o odpowiedni komunikat w metodzie what()

#include <exception>
#include <iostream>
#include <string>

class MojWyjatek : public std::exception {
public:
    MojWyjatek(const std::string& s) : msg{s} {}
    
    const char* what() const noexcept override {
//         return "Mianownik nie moze byc 0!";
        return msg.c_str();
    }
private:
    std::string msg;
};

class Ulamek {
public:
    Ulamek(int a, int b) {
        if (b == 0) {
            MojWyjatek w{"Nie dziel przez 0!"};
            throw w;
        }
        if (a == 5) {
            MojWyjatek w{"Licznik nie moze byc 5, bo tak."};
            throw w;
        }
        licznik = a;
        mianownik = b;
    }
private:
    int licznik;
    int mianownik;
};

int main() {
    int a, b;
    std::cin >> a >> b;
    try {
        Ulamek u{a, b};
    }
    catch (std::exception& w) { //tu możemy skorzystać z polimorfiuzmu i oczekiwać wyjątku klasy bazowej
        std::cout << "Blad: " << w.what() << '\n';
    }
}
