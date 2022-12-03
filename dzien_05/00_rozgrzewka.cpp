//Napisz funkcję, która przyjmie pozycję skoczka na szachownicy i zwróci informację, na ile różnych pól może się on ruszyć (w 1 ruchu)

#include <iostream>

bool pole_ok(int x, int y) {
    return x >= 0 && x <=7 && y >= 0 && y <= 7;
}

//pola 0-7
int ile_ruchow(int x, int y) {
    int suma = 0;
    const int wspx[8] = {2, 2, -2, -2, 1, 1, -1, -1};
    const int wspy[8] = {1, -1, 1, -1, 2, -2, 2, -2};
    for (int i = 0; i < 8; i += 1) {
        if (pole_ok(x + wspx[i], y + wspy[i]))
            suma += 1;
    }
    return suma;
}

int main() {
    int x;
    int y;
    std::cin >> x >> y;
    std::cout << "Mozliwe ruchy: " << ile_ruchow(x, y) << '\n';
}
