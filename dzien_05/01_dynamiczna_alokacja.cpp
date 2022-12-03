#include <iostream>

//w C: malloc() / free()

int main() {
    int* p = new int; //operator new zwraca adres przydzielonej pamięci na stercie (ang. heap)
    std::cout << p << '\n';
    delete p; // operator delete zwalnia pamięć pod adresem `p`
    
    p = new int;
    std::cout << p << '\n';
    delete p;
//     delete p; // zwalnianie już zwolnionej pamięci to błąd
    
    p = new int[10]; //new tablicowy (new[]) - rozmiar tablicy może być zmienną! :D
    p[4] = 123;
    for (int i = 0; i < 10; i++) {
        std::cout << p[i] << '\n';
    }
    delete[] p; //pamięć zaalokowaną za pomocą new[] musimy zwolić za pomocą delete[]
    //mieszanie new[] z delete oraz new z delete[] to błąd!
}
