#include <iostream>

class Kwadrat {
public:
    Kwadrat(double x);
    virtual double pole() const;
    void setBok(double x);
    double getBok() const;
private:
    double bok;
};

Kwadrat::Kwadrat(double x) {
    setBok(x);
}

double Kwadrat::pole() const {
    return bok * bok;
}

void Kwadrat::setBok(double x) {
    bok = x;
}

double Kwadrat::getBok() const {
    return bok;
}

class Prostokat : public Kwadrat {
public:
    Prostokat(double a, double b);
    double pole() const override;
    void setBok2(double a);
    double getBok2() const;
private:
    double bok2;
};

Prostokat::Prostokat(double a, double b) 
 : Kwadrat{a}
{
    setBok2(b);
}
double Prostokat::pole() const {
    return getBok() * bok2;
}
void Prostokat::setBok2(double a) {
    bok2 = a;
}
double Prostokat::getBok2() const {
    return bok2;
}

// // zmienna typu Kwadrat zawsze będzie zawierać obiekt typu Kwadrat
// // wskaźnik lub referencja na Kwadrat może zawierać obiekt dziedzczący po typie Kwadrat
// void wypisz_pole(Kwadrat* k) {
//     //dynamic_cast działa tylko dla wskaźnikow i referencji
//     Prostokat* p = dynamic_cast<Prostokat*>(k); //dynamic cast rzutuje na podany typ pod warunkiem, że pod zadanym adresem faktycznie znajduje się obiekt tego typu. Działa tylko jeśli typ, na który rzutujemy dziedziczy po typie rzutowanym.
//     if (p != nullptr) { // rzutowanie się udało
//         std::cout << "Pole = " << p->pole() << '\n';
//     }
//     else {
//         std::cout << "Pole = " << k->pole() << '\n';
//     }
// }

void wypisz_pole(Kwadrat* k) {
    std::cout << "Pole = " << k->pole() << '\n';
}

int main() {
    Kwadrat k{7};
    Prostokat p{3, 7};
    Prostokat p2{1.5, 2.5};
    
    Kwadrat* tablica[3];
    tablica[0] = &p2;
    tablica[1] = &k;
    tablica[2] = &p;
//     k = p; //jeśli Prostokat nie dziedziczy po Kwadracie to dostaniemy błąd kompilacji
//     std::cout << k.pole() << '\n';
//     p = k; // Błąd
    for (int i = 0; i < 3; i += 1) {
        std::cout << tablica[i]->pole() << '\n';
    }
    
}
