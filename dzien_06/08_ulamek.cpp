#include <iostream>

class Ulamek {
public:
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
    
    int getMianownik() const {
        return mianownik;
    }
    
    void setMianownik(int x) {
        if (x == 0)
            x = 1;
        mianownik = x;
    }

private: 
    int licznik;
    int mianownik;
}; //Ulamek

int main() {
    Ulamek a{2, 0};
//     a.mianownik = 0; // sięganie do pól prywatnych spoza metod klasy powoduje błąd kompilacji
    a.wypisz();
    std::cout << "Mianownik = " << a.getMianownik() << "\n";
    a.setMianownik(5);
    a.wypisz();
}
