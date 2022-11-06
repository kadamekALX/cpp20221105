#include <iostream>

// for (inicjalizacja; warunek; inkrementacja) {
//     zawartosc petli
// }

//inicjalizacja jest wykonywana raz przed rozpoczęciem pętli, a następnie:
// 1. sprawdzana jest prawdziwość warunku
// 2. jeśli warunek jest falszywy to koniec petli
// 3. wykonywana jest zawartosc petli
// 4. wykonawana jest instrukcja inkrementacyjna
// 5. wróć do pkt 1.


int main() {
    for (int i = 0; i < 5; i += 1) {
        std::cout << i << "\n";
    }
}
