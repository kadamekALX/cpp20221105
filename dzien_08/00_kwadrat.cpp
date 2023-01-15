//Napisz klasę Kwadrat, która będzie przechowywała informację o długości boku kwadratu (double) oraz będzie posiadać metodę pole() zwracającą pole powierzchni tego kwadratu.
//Dodatkowo, napisz getter i setter dla boku.
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

int main() {
    Kwadrat k{7};
    std::cout << k.pole() << '\n';
    k.setBok(3.5);
    std::cout << k.pole() << '\n';
}
