#include <iostream>

int main() {
    int kot = 6;
    std::cout << "kot = " << kot << "\n";
    std::cout << "adres zmiennej `kot` = " << &kot << "\n";
    int* adres_kota = &kot; //zmienna `adres_kota` przechowuje adres wartości typu `int`
    std::cout << "adres_kota = " << adres_kota << "\n";
    
    //dereferencja - dobranie się do wartości pod zadanym adresem
    //dereferencja adresu, do którego nie mamy dostępu to błąd
    std::cout << "*adres_kota = " << *adres_kota << "\n";
    *adres_kota = 17;
    std::cout << "kot = " << kot << "\n";
    
    //nullptr - wskaźnik w "nic" (w C - NULL)
    //dereferencja nullptr jest błędem
    int* nic = nullptr;
//     *nic = 13; //BŁĄD

    std::cout << &adres_kota << "\n";
    int** x = &adres_kota;
    
    return 0;
}
