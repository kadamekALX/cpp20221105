#include <iostream>

class A {
public:
    // metoda wirtualna - wywołana przez wskaźnik/referencję najpierw sprawdzi, czy nie jest to obiekt klasy dziedziczącej. Jeśli jest to wywoła tą metodę na faktycznym typie obiektu.
    virtual void print() const {
        std::cout << "Jestem A\n";
    }
    
    // jeżeli jakakolwiek metoda jest oznaczona jako virtual to do obiektu zostanie dołożony wskaźnik na vtable
    // vtable - tablica mapująca metody wirtualne na ich implementacje
    
    int a;
    int b;
};

class B : public A {
public:
    // metoda print jest wirtualna, ponieważ jest oznaczona jako wirtualna w klasie bazowej
    // override - sprawdza, czy ta metoda faktycznie nadpisuje metodę wirtualną
    void print() const override {
        std::cout << "Jestem B\n";
    }
};

int main() {
    std::cout << "Rozmiar A: " << sizeof(A) << '\n';
    std::cout << "Rozmiar B: " << sizeof(B) << '\n';
    A a;
    B b;
    a.print();
    b.print();
    A* p = &b;
    p->print();
    p = &a;
    p->print();
}
