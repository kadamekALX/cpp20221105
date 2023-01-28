#include <iostream>

//Przerób klasę Tablica na klasę szablonową parametryzowaną typem przechowywanych wartości.
// Tablica<int> tab{3};
// tab.dodaj(13);
// Tablica<double> tab2{2};
// tab2.dodaj(2.56);

template <typename T>
class Tablica {
public:
    Tablica(int n);
    Tablica(const Tablica& t);
    ~Tablica();
    
    void operator=(const Tablica& t);
    
    void wypisz() const;
    int rozmiar() const;
    T& operator[](int idx);
    const T& operator[](int idx) const;
    
    void dodaj(T x);
private:
    
    void skopiuj(const Tablica& t);
    void usun();
    
    T* tab;
    int rozm;
    int pojemnosc;
};

template <typename T>
Tablica<T>::Tablica(int n) {
    tab = new T[n];
    rozm = n;
    pojemnosc = n;
//     for (int i = 0; i < n; i += 1) {
//         tab[i] = 0;
//     }
}

template <typename T>
Tablica<T>::Tablica(const Tablica& t) {
    skopiuj(t);
}

template <typename T>
void Tablica<T>::operator=(const Tablica& t) {
    if (this == &t) {
        return;
    }
    usun();
    skopiuj(t);
}

template <typename T>
Tablica<T>::~Tablica() {
    usun();
}

template <typename T>
void Tablica<T>::wypisz() const {
    for (int i = 0; i < rozm; i += 1) {
        std::cout << tab[i] << ' ';
    }
    std::cout << '\n';
}

template <typename T>
int Tablica<T>::rozmiar() const {
    return rozm;
}

template <typename T>
T& Tablica<T>::operator[](int idx) {
    return tab[idx];
}

template <typename T>
const T& Tablica<T>::operator[](int idx) const {
    return tab[idx];
}

template <typename T>
void Tablica<T>::skopiuj(const Tablica& t) {
    rozm = t.rozm;
    pojemnosc = t.pojemnosc;
    tab = new T[pojemnosc];
    for (int i = 0; i < rozm; i += 1) {
        tab[i] = t.tab[i];
    }
}

template <typename T>
void Tablica<T>::usun() {
    delete[] tab;
}

template <typename T>
void Tablica<T>::dodaj(T x) {
    if (rozm == pojemnosc) {
        pojemnosc *= 2;
        T* tmp = new T[pojemnosc];
        for (int i = 0; i < rozm; i += 1) {
            tmp[i] = tab[i];
        }
        delete[] tab;
        tab = tmp;
    }
    tab[rozm++] = x;
}

int main() {
    Tablica<double> t{1};
    for (int i = 1; i < 1000000; i += 1) {
        t.dodaj(i);
    }
    std::cout << t.rozmiar() << '\n';
}
