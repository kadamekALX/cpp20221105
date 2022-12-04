#include <iostream>


//Do sekcji publicznej mają dostęp wszyscy
//Do sekcji prywatnej mają dostęp TYLKO metody z tej samej klasy/struktury

struct Ulamek {
private: // wszystko poniżej tego znacznika znajduje się w sekcji prywatnej
    int licznik;
    int mianownik;

public: // wszystko poniżej tego znacznika znajduje się w sekcji publicznej
    void wypisz() const {
        std::cout << licznik << '/' << mianownik << '\n';
    }

    Ulamek(int a, int b) {
        licznik = a;
        mianownik = b;
        if (mianownik == 0)
            mianownik = 1;
    }
    
    Ulamek mnoz(const Ulamek& b) const {
        Ulamek c{licznik * b.licznik, mianownik * b.mianownik};
        return c;
    }
    
    //getter
    int getMianownik() const {
        return mianownik;
    }
    
    //setter
    void setMianownik(int x) {
        if (x == 0)
            x = 1;
        mianownik = x;
    }
}; //Ulamek

int main() {
    Ulamek a{2, 0};
//     a.mianownik = 0; // sięganie do pól prywatnych spoza metod klasy powoduje błąd kompilacji
    a.wypisz();
    std::cout << "Mianownik = " << a.getMianownik() << "\n";
    a.setMianownik(5);
    a.wypisz();
}
