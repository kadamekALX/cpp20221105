#include <iostream>
#include <string>

struct Kot {
    std::string imie;
    
    //konstruktor (constructor) - pierwsza metoda, która zostanie wywołana na obiekcie zaraz po jego stworzeniu.
    //aby stworzyć konstruktor należy napisać metodę bez zwracanygo typu o nazwie takiej samej jak nazwa typu.
//     Kot() {
//         std::cout << "Tworze Kota\n";
//     }
    //obecność jakiegokolwiek konstruktora powoduje, że kompilator nie wygeneruje domyślnego konstruktora bezargumentowego
    Kot(const std::string& a) {
        std::cout << "Tworze Kota o imieniu " << a << "\n";
        imie = a;
    }
    
    void miaucz() const {
        if (!imie.empty())
            std::cout << imie << ": ";
        std::cout << "Miau!\n";
    }
};

int main() {
    //To samo co; Kot mruczek{};
//     Kot mruczek; //konstruktor jest wywoływany w momencie tworzenia obiektu
    Kot mruczek{"Mruczek"};
    mruczek.miaucz();
    
    Kot puszek{"Puszek"}; //wywołanie konstruktora z argumentem
    puszek.miaucz();
    
//     Kot{"Okruszek"}.miaucz();
}
