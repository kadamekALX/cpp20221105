#include <iostream>

// Przepisz klasę Prostokat tak, aby dziedziczyła po klasie Kwadrat

class Kwadrat {
public:
    Kwadrat(double x = 1.0); // wartość domyślna jako obejście problemu w Prostakacie
    double pole() const;
    void setBok(double x);
    double getBok() const;
// protected: // pola protected są widoczne dla klas dziedziczących, a poza klasą zachowują się jak pola prywatne
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
    double pole() const;
    void setBok2(double a);
    double getBok2() const;
private:
    double bok2;
};

Prostokat::Prostokat(double a, double b) {
    setBok(a);
    setBok2(b);
}
double Prostokat::pole() const {
    //korzystamy z metody getBok(), bo bok jest prywatny w klasie Kwadrat
    return getBok() * bok2;
}
void Prostokat::setBok2(double a) {
    bok2 = a;
}
double Prostokat::getBok2() const {
    return bok2;
}

int main() {
    Kwadrat k{7};
    std::cout << k.pole() << '\n';
    k.setBok(3.5);
    std::cout << k.pole() << '\n';
    Prostokat p{3, 5};
    std::cout << p.pole() << '\n';
}
