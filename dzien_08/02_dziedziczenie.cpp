#include <iostream>
#include <string>

class Zwierz {
public:
    void setImie(const std::string& s) {
        imie = s;
    }
    
    std::string getImie() const {
        return imie;
    }
    
    void dajGlos() const {
        std::cout << "???\n";
    }
private:
    std::string imie;
};

class Pies : public Zwierz {
public:
    void dajGlos() const {
        std::cout << "Hau hau!\n";
    }
};

class Kot : public Zwierz {
public:
    void dajGlos() const {
        std::cout << "Miaaaaaaau!\n";
    }
};

int main() {
//     Zwierz z;
//     z.setImie("Burek"); // jeśli nie ma takiej metody w klasie Pies to szukamy takiej metody w klasie nadrzędnej (Zwierz)
//     z.dajGlos();
    
    Pies p;
    p.setImie("Azor");
    std::cout << p.getImie() << ": ";
    p.dajGlos();
    
    Kot k;
    k.setImie("Mruczek");
    std::cout << k.getImie() << ": ";
    k.dajGlos();
}
