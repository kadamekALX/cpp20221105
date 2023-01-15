#include <iostream>

class A {
public:
    A() {
        std::cout << "konstruktor A\n";
    }
    
    ~A() {
        std::cout << "destruktor A\n";
    }
};

class B : public A {
public:
    B() {
        std::cout << "konstruktor B\n";
    }
    
    ~B() {
        std::cout << "destruktor B\n";
    }
};

class C : public B {
public:
    C() {
        std::cout << "konstruktor C\n";
    }
    
    ~C() {
        std::cout << "destruktor C\n";
    }
private:
    int x;
    A a;
};

// I. Przed wywołaniem konstruktora zostanie wywołany konstruktor klasy nadrzędnej, a następnie konstruktory wszystkich atrybutów (w kolejności zdefiniownia.

// II. Destruktory są wywoływane w odwrotnej kolejności

int main() {
    C c;
}
