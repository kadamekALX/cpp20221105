#include <iostream>

int main() {
    const int stala = 17;
    int zmienna = 14;
    
    int* wsk = &zmienna;
    const int* c_wsk = &zmienna; //wskaznik na const - nie pozwala na modyfikację wartości pod przechowywanym adresem
    int* const wsk_c = &zmienna; //const wskaznik - pozwala na modyfikację wartości pod adresem, ale nie na modyfikację samego adresu
    const int* const cwc = &zmienna; //const wskaznik na const
    
    int x = 1234;
    
//     *c_wsk = 99; //Błąd
    std::cout << *c_wsk << "\n";
    c_wsk = &x;
    std::cout << *c_wsk << "\n";
    
    std::cout << *wsk_c << "\n";
    *wsk_c = 99;
    std::cout << *wsk_c << "\n";
    wsk_c = &x;
}
