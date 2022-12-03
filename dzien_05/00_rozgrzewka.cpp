//Napisz funkcję, która przyjmie pozycję skoczka na szachownicy i zwróci informację, na ile różnych pól może się on ruszyć (w 1 ruchu)

#include <iostream>

bool pole_ok(int x, int y) {
    return x >= 0 && x <=7 && y >= 0 && y <= 7;
}

//pola 0-7
int ile_ruchow(int x, int y) {
    int suma = 0;
    if (pole_ok(x + 2, y + 1))
        suma += 1;
    if (pole_ok(x + 2, y - 1))
        suma += 1;
    if (pole_ok(x - 2, y + 1))
        suma += 1;
    if (pole_ok(x - 2, y - 1))
        suma += 1;
    if (pole_ok(x + 1, y + 2))
        suma += 1;
    if (pole_ok(x + 1, y - 2))
        suma += 1;
    if (pole_ok(x - 1, y + 2))
        suma += 1;
    if (pole_ok(x - 1, y - 2))
        suma += 1;
    return suma;
}

int main() {
    int x;
    int y;
    std::cin >> x >> y;
    std::cout << "Mozliwe ruchy: " << ile_ruchow(x, y) << '\n';
}
