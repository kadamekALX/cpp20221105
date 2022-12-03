#include <iostream>

struct Elem {
    int wartosc;
    Elem* nastepny;
};

// wstawiamy nowy element na początek listy
// zwracamy adres nowego elementu
Elem* wstaw(Elem* lista, int nowa_wartosc) {
    
}

void wypisz(Elem* lista) {
    
}

int main() {
    Elem* lista = nullptr;
    lista = wstaw(lista, 5);
    lista = wstaw(lista, 3);
    lista = wstaw(lista, 6);
    wypisz(lista);
}
