// fib(1) = 1
// fib(2) = 1
// fib(n) = fib(n - 1) + fib(n - 2)
// 
// 1 1 2 3 5 8 13 21 34 55 ...
// Napisz funkcję, która policzy n-ty wyraz ciągu Fibonacciego

#include <iostream>

// TODO napisać tą funkcję iteracyjnie (bez użycia rekurencji)
int fib(int n) {
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int x;
    std::cin >> x;
    std::cout << fib(x) << "\n";
}
