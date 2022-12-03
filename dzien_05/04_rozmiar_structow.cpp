#include <iostream>

struct A {
    int a;
};

struct B {
    int a;
    int b;
};

struct C {
    int a;
    bool b;
    double c;
//     bool b; // kolejność elementów w strukturze może mieć wpływ na jej rozmiar
};

struct D {
    C a;
    int b;
};

struct E {
    int a;
    E* b; //możemy tworzyć wskaźniki na niekompletne typy, bo rozmiar typu wskaźnikowego jest zawsze taki sam
};

int main() {
    std::cout << "int " << sizeof(int) << '\n'; // 4
    std::cout << sizeof(A) << '\n'; // 4 - sam struct nie powoduje zużycia dodatkowej pamięci
    std::cout << sizeof(B) << '\n'; // 8
    std::cout << "bool " << sizeof(bool) << '\n'; // 1
    std::cout << "double " << sizeof(double) << '\n'; // 8
    std::cout << sizeof(C) << '\n';
    std::cout << sizeof(D) << '\n';
    std::cout << sizeof(E) << '\n';
    std::cout << sizeof(E*) << '\n';
}
