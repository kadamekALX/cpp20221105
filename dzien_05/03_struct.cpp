#include <iostream>
#include <cmath>

//definujemy _nowy_ typ `Punkt`, który składa się z 2 pól będących intami
struct Punkt {
    int x;
    int y;
}; //po structowych klamerkach musi być średnik

struct Ulamek {
    int licznik;
    int mianownik;
};

void wypisz(Punkt p) {
    std::cout << "(" << p.x << ", " << p.y << ")" << '\n';
}

//przeciążanie funkcji (function overloading) - w C++ możemy stworzyć kilka funkcji o tej samej nazwie pod warunkiem, że różnią się liczbą lub typem argumentów
void wypisz(Ulamek u) {
    std::cout << "(" << u.licznik << "/" << u.mianownik << ")" << '\n';
}

// Zad 1: napisz funkcję, która przyjmie 2 Punkty i zwróci odległość między nimi
double odleglosc(Punkt a, Punkt b) {
    const int dx = a.x - b.x;
    const int dy = a.y - b.y;
    return std::sqrt(dx * dx + dy * dy);
}
// Zad 2: Napisz funkcję, która przyjmie Punkty S i P oraz int R, a następnie zwróci informację, czy Punkt P leży wewnątrz koła o środku w S i promieniu R.
bool czy_wewnatrz_kola(Punkt s, int r, Punkt p) {
    return odleglosc(s, p) <= r;
}

int main() {
    Punkt p; //definujemy zmienną typu Punkt
    p.x = 5; //sięgamy do pola `x` w zmiennej `p` i ustawiamy je na 5
    p.y = 3;
    
    Punkt q;
    q.x = 1;
    q.y = 1;
    
    wypisz(p);
    wypisz(q);
    
    Ulamek u;
    u.licznik = 1;
    u.mianownik = 2;
    wypisz(u);
    
    std::cout << "odleglosc = " << odleglosc(p, q) << "\n";
    std::cout << "czy_wewnatrz_kola = " << czy_wewnatrz_kola(p, 5, q) << '\n';
}
