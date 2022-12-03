//Napisz funkcję, która przyjmie pozycję skoczka na szachownicy i zwróci informację, na ile różnych pól może się on ruszyć (w 1 ruchu)

#include <iostream>

bool pole_ok(int x, int y) {
    return x >= 0 && x <=7 && y >= 0 && y <= 7;
}

//pola 0-7
int ile_ruchow(int x, int y) {
    int suma = 0;
    const int wsp[8][2] = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1},
                           {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};
    for (int i = 0; i < 8; i += 1) {
        if (pole_ok(x + wsp[i][0], y + wsp[i][1]))
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
