#include <iostream>
#include <string>

class Postac {
public:
    Postac(const std::string& imie, int zdrowie) {
        
    }
    
    //np. "Andrzej, zdrowie: 120/120"
    void wypisz() const {
        
    }
    
    //zmniejsza zdrowie postaci o n. Zdrowie nie powinno spaść poniżej 0.
    void otrzymaj_obrazenia(int n) {
        
    }
    
    //postać żyje jeśli ma >0 zdrowia
    bool czy_zyje() const {
        
    }
    
    //przywraca postaci n punktow zdrowia. Zdrowie nie powinno przekraczać wartości maksymalnej. Leczenie martwej postaci nie powinno mieć efektu.
    void wylecz(int n) {
        
    }
};

int main() {
    Postac rufus{"Rufus", 110};
    rufus.wypisz(); // Rufus, zdrowie: 110/110
    rufus.otrzymaj_obrazenia(15);
    rufus.wypisz(); // Rufus, zdrowie: 95/110
    rufus.otrzymaj_obrazenia(100);
    rufus.wypisz(); // Rufus, zdrowie: 0/110
}
