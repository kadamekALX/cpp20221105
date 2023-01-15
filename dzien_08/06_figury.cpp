#include <iostream>

const int KWADRAT = 0;
const int PROSTOKAT = 1;

class Kwadrat {
public:
    Kwadrat(double x);
    double pole() const;
    void setBok(double x);
    double getBok() const;

    int typ;
private:
    double bok;
};

Kwadrat::Kwadrat(double x) {
    typ = KWADRAT;
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
    double pole() const;
    void setBok2(double a);
    double getBok2() const;
private:
    double bok2;
};

Prostokat::Prostokat(double a, double b) 
 : Kwadrat{a}
{
    typ = PROSTOKAT;
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

// zmienna typu Kwadrat zawsze będzie zawierać obiekt typu Kwadrat
// wskaźnik lub referencja na Kwadrat może zawierać obiekt dziedzczący po typie Kwadrat
void wypisz_pole(Kwadrat* k) {
    if (k->typ == PROSTOKAT) {
        Prostokat* p = static_cast<Prostokat*>(k); //rzutujemy wskaźnik k na typ Prostokąt*
        std::cout << "Pole = " << p->pole() << '\n';
    }
    else {
        std::cout << "Pole = " << k->pole() << '\n';
    }
}

int main() {
    Kwadrat k{7};
    Prostokat p{3, 5};
//     k = p; //jeśli Prostokat nie dziedziczy po Kwadracie to dostaniemy błąd kompilacji
//     std::cout << k.pole() << '\n';
//     p = k; // Błąd
    wypisz_pole(&k);
    wypisz_pole(&p);
    
}
