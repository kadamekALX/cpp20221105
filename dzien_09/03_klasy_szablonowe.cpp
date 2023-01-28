#include <iostream>

template <typename T>
class Pudelko {
public:
    Pudelko(const T& x) : val{x} {}
    
    const T& daj() const;
private:
    T val;
};


//jeżeli uzupełniamy implementację szablonu poza klasą to musimy ponownie napisać `template <...>`
template <typename T>
const T& Pudelko<T>::daj() const {
    return val;
}

void wypisz_int(const Pudelko<int>& p) {
    std::cout << p.daj() << '\n';
}

template <typename T>
void wypisz(const Pudelko<T>& p) {
    std::cout << p.daj() << '\n';
}

class Cos : public Pudelko<int> {
public:
    Cos(int x) : Pudelko<int>{x} {}
};

template <typename T>
class Foo : public Pudelko<T> {
public:
    Foo(const T& x) : Pudelko<T>{x} {}
};

int main() {
    Pudelko<int> p{15}; // jak tworzymy zmienną typu szablonowego to musimy uzupelnic parametry szablonu
    Pudelko<char> c{'a'};
    
    std::cout << p.daj() << '\n';
    std::cout << c.daj() << '\n';
    wypisz_int(p);
//     wypisz_int(c); //Pudelko<char> to inny typ niż Pudelko<int>
    wypisz(p);
    wypisz(c);
    
    Cos a{333};
    Foo<double> f{3.14};
    std::cout << a.daj() << '\n';
    std::cout << f.daj() << '\n';
    wypisz(f);
    
}
