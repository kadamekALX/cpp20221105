#include <iostream>


// w klasach wszystkie pola są domyślnie prywatne
class MojaKlasa {
    int a;
};

//w structach wszystkie pola są domyślnie publiczne
struct MojaStruktura {
    int a;
};

int main() {
//     MojaKlasa k;
//     std::cin >> k.a;
    MojaStruktura s;
    std::cin >> s.a;
}
