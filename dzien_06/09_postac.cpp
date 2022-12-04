#include <iostream>
#include <string>

class Postac {
public:
    
    //wewnątrz każdej metody dostępny jest wskaźnik `this` zawierający adres obiektu, na którym została wywołana metoda
    Postac(const std::string& imie, int zdrowie) {
        this->imie = imie;
        this->zdrowie = zdrowie;
        max_zdrowie = zdrowie;
    }
    
    //np. "Andrzej, zdrowie: 120/120"
    void wypisz() const {
        std::cout << imie << ", zdrowie: " << zdrowie << "/" << max_zdrowie << '\n'; 
    }
    
    //zmniejsza zdrowie postaci o n. Zdrowie nie powinno spaść poniżej 0.
    void otrzymaj_obrazenia(int n) {
        if (n > zdrowie)
            zdrowie = 0;
        else
            zdrowie -= n;
        
//         zdrowie -= n;
//         if (zdrowie < 0)
//             zdrowie = 0;
    }
    
    //postać żyje jeśli ma >0 zdrowia
    bool czy_zyje() const {
        return zdrowie > 0;
    }
    
    //przywraca postaci n punktow zdrowia. Zdrowie nie powinno przekraczać wartości maksymalnej. Leczenie martwej postaci nie powinno mieć efektu.
    void wylecz(int n) {
        if (!czy_zyje()) //jeżeli Postać nie żyje
            return;
        
        zdrowie += n;
        if (zdrowie > max_zdrowie)
            zdrowie = max_zdrowie;
    }
    
private:
    std::string imie;
    int zdrowie;
    int max_zdrowie;
};

int main() {
    Postac rufus{"Rufus", 110};
    rufus.wypisz(); // Rufus, zdrowie: 110/110
    rufus.otrzymaj_obrazenia(15);
    rufus.wypisz(); // Rufus, zdrowie: 95/110
    rufus.wylecz(3);
    rufus.wypisz(); // Rufus, zdrowie: 98/110
    rufus.wylecz(30);
    rufus.wypisz(); // Rufus, zdrowie: 110/110
    while (rufus.czy_zyje()) {
        rufus.otrzymaj_obrazenia(15);
        rufus.wypisz();
    }
}

//Zadanie dodatkowe:
// Dodaj do Postaci atrybut `sila` (przekazywany w konstruktorze) i napisz program przeprowadzający walkę na śmierć i życie pomiędzy 2 Postaciami. Postać zadaje tyle obrażeń ile wynosi jej siła

