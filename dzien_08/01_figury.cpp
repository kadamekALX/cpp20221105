//Napisz klasę Kwadrat, która będzie przechowywała informację o długości boku kwadratu (double) oraz będzie posiadać metodę pole() zwracającą pole powierzchni tego kwadratu.
//Dodatkowo, napisz getter i setter dla boku.

//Napisz klasę Prostokat, która będzie zawierać informacje o długościach boków prostokąta (double), będzie posiadać metodę pole() oraz gettery i settery do boków

#include <iostream>

class Kwadrat {
public:
    Kwadrat(double x);
    double pole() const;
    void setBok(double x);
    double getBok() const;
private:
    double bok;
};

class Prostokat {
public:
    Prostokat(double a, double b);
    double pole() const;
    void setBok(double a);
    void setBok2(double a);
    double getBok() const;
    double getBok2() const;
private:
    double bok;
    double bok2;
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

Prostokat::Prostokat(double a, double b) {
    setBok(a);
    setBok2(b);
}
double Prostokat::pole() const {
    return bok * bok2;
}
void Prostokat::setBok(double a) {
    bok = a;
}
void Prostokat::setBok2(double a) {
    bok2 = a;
}
double Prostokat::getBok() const {
    return bok;
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
