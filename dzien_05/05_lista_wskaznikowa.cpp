#include <iostream>

struct Elem {
    int wartosc;
    Elem* nastepny;
};

// wstawiamy nowy element na początek listy
// zwracamy adres nowego elementu
void wstaw(Elem** lista, int nowa_wartosc) {
    Elem* tmp = new Elem; //tworzymy nowy element
    tmp->wartosc = nowa_wartosc; // to samo co (*tmp).wartosc = nowa_wartosc;
    tmp->nastepny = *lista;
    *lista = tmp;
}

void wypisz(Elem* lista) {
    Elem* tmp = lista;
    while (tmp != nullptr) {
        std::cout << tmp->wartosc << ' ';
        tmp = tmp->nastepny;
    }
    std::cout << '\n';
}

void zwolnij(Elem* lista) {
    while (lista != nullptr) {
        Elem* tmp = lista;
        lista = lista->nastepny;
        delete tmp;
    }
}

int main() {
    Elem* lista = nullptr;
    wstaw(&lista, 5);
    wstaw(&lista, 3);

    wypisz(lista);
    
    zwolnij(lista);
}
