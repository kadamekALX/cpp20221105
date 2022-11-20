//Napisz funkcję, która przyjmie 2 tablice i zwróci informację, czy zawierają takie same elementy w takiej samej kolejności (czy są równe)
#include <iostream>

bool czy_rowne(const int* tab1, int rozm1, const int* tab2, int rozm2) {
    if (rozm1 != rozm2) {
        return false;
    }
    
    for (int i = 0; i < rozm1; i += 1) {
        if (tab1[i] != tab2[i])
            return false;
    }
    return true;
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {1, 2, 3, 4, 5};
    std::cout << czy_rowne(a, 5, b, 5) << "\n";
    std::cout << czy_rowne(a, 4, b, 5) << "\n";
    std::cout << czy_rowne(a, 3, b + 2, 3) << "\n";
    std::cout << czy_rowne(a + 2, 3, a + 2, 3) << "\n";
}
