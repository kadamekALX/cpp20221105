#include <iostream>
#include <cstring>

//typename T informuje kompilator, że chemy, żeby `T` było traktowane jako nazwa typu

template <typename T>
T max(T a, T b) {
    if (a > b)
        return a;
    return b;
}

//specjalizacja szablonu
template <>
const char* max(const char* a, const char* b) {
    std::cout << "specjalizacja!\n";
    if (std::strcmp(a, b) > 0)
        return a;
    return b;
}

const char* max(const char* a, const char* b) {
    std::cout << "funkcja!\n";
    if (std::strcmp(a, b) > 0)
        return a;
    return b;
}

int main() {
    // jeśli oba argumenty są takiego samego typu to dedukcja typów sama wybierze odpowiedni szablon
    std::cout << max(3, 6) << '\n';
    std::cout << max(3.5, 6.12) << '\n';
    std::cout << max('c', 'D') << '\n';
    
    //możemy przekazać argumenty do szablonu - wtedy dedukcja typów nie ma miejsca
    std::cout << max<double>(3.5, 2) << '\n';
    
    //"zwykłe" funkcje mają pierwszeństwo nad szablonami
    //specjalizacje szablonu mają pierwszeństwo nad ogólnym szablonem
    std::cout << max("QWER", "abcd") << '\n'; //const char*
    std::cout << max<const char*>("asdf", "qwe") << '\n';
    std::cout << max<>("asdf", "qwe") << '\n'; //dostawienie `<>` określa, że chcemy uruchomić wersję szablonową
    
}
