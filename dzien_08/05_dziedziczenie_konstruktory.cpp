#include <iostream>

class A {
public:
    A(int x) {
        std::cout << "konstruktor A " << x << "\n";
    }
    
    ~A() {
        std::cout << "destruktor A\n";
    }
};

class B : public A {
public:
    // lista inicjalizacyjna - pozwana na wywołanie konstruktorów klasy nadrzędnej i atrybutów z zadanymi argumentami
    // konstruktory atrybutów są zawsze wywoływane w kolejności ich zdefiniowania, a nie w kolejności występowania na liście inicjalizacyjnej
    B() : A{10}, atrybut{34}, atrybut2{12} {
        std::cout << "konstruktor B\n";
    }
    
    ~B() {
        std::cout << "destruktor B\n";
    }
    
    A atrybut;
    A atrybut2;
};


// I. Przed wywołaniem konstruktora zostanie wywołany konstruktor klasy nadrzędnej, a następnie konstruktory wszystkich atrybutów (w kolejności zdefiniownia.

// II. Destruktory są wywoływane w odwrotnej kolejności

int main() {
    B b;
}
