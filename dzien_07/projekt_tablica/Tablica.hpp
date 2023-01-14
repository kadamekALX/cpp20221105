#ifndef TABLICA_HPP_INCLUDED // include guard - pilnuje, żeby wielokrotne zaincludowanie tego samego nagłówka nie spowodowało błędu kompilacji
#define TABLICA_HPP_INCLUDED

class Tablica {
public:
    Tablica(int n);
    Tablica(const Tablica& t);
    ~Tablica();
    
    void operator=(const Tablica& t);
    
    void wypisz() const;
    int rozmiar() const;
    int& operator[](int idx);
    const int& operator[](int idx) const;
    
    void dodaj(int x);
private:
    
    void skopiuj(const Tablica& t);
    void usun();
    
    int* tab;
    int rozm;
    int pojemnosc;
};

#endif
