#include <iostream>

// Napisz klasy Kolo i Elipsa zawierające promień/promienie i metodę pole(). Poukładaj wszystkie figury w sensowną hierarchię dziedziczenia.
// Zakładamy, że pi = 3.14
// Pole kola: pi * r * r
// Pole elipsy: pi * r * r2

//Figura zawiera tylko wspólny interfejs dla Kola i Kwadratu.
class Figura {
public:
    virtual double pole() const {
        return -1.0;
    }
};

class Kwadrat : public Figura {
public:
    Kwadrat(double x);
    double pole() const override;
    void setBok(double x);
    double getBok() const;
private:
    double bok;
};

class Prostokat : public Kwadrat {
public:
    Prostokat(double a, double b);
    double pole() const override;
    void setBok2(double a);
    double getBok2() const;
private:
    double bok2;
};

class Kolo : public Figura {
public:
    Kolo(double r);
    double pole() const override;
    void setR(double r);
    double getR() const;
private:
    double r;
};

class Elipsa : public Kolo {
public:
    Elipsa(double r, double r2);
    double pole() const override;
    void setR2(double r);
    double getR2() const;
private:
    double r2;
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

Kolo::Kolo(double r) {
    setR(r);
}
double Kolo::pole() const {
    return 3.14 * r * r;
}
void Kolo::setR(double r) {
    this->r = r;
}
double Kolo::getR() const {
    return r;
}

Elipsa::Elipsa(double r, double r2) : Kolo{r} {
    setR2(r2);
}
double Elipsa::pole() const {
    return 3.14 * getR() * r2;
}
void Elipsa::setR2(double r) {
    r2 = r;
}
double Elipsa::getR2() const {
    return r2;
}


void wypisz_pole(Figura* f) {
    std::cout << "Pole = " << f->pole() << '\n';
}

int main() {
    Kwadrat k{5};
    Prostokat p{3, 7};
    Kolo c{10};
    Elipsa e{2, 5};
    
    wypisz_pole(&k);
    wypisz_pole(&p);
    wypisz_pole(&c);
    wypisz_pole(&e);
}
