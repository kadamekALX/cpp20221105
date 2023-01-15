#include <iostream>

class A {
public:
    A() : tab{new int[10]} {
        std::cout << "A()\n";
    }
    
    // o ile nie mamy dobrego powodu, żeby zrobić inaczej, destruktor powinien być wirtualny
    virtual ~A() {
        std::cout << "~A()\n";
        delete[] tab;
    }
private:
    int* tab;
};

class B : public A {
public:
    B() : tab2{new int[100]} {
        std::cout << "B()\n";
    }
    ~B() {
        std::cout << "~B()\n";
        delete[] tab2;
    }
private:
    int* tab2;
};

int main() {
    A* tab[3];
    tab[0] = new A;
    tab[1] = new B;
    tab[2] = new A;
    
    for (int i = 0; i < 3; i += 1) {
        delete tab[i];
    }
}
