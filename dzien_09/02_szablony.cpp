#include <iostream>

int f(int x) {
    return x;
}

template <int N>
int g() {
    return N;
}

int fib(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

template <int N>
int templ_fib() {
    return templ_fib<N - 1>() + templ_fib<N - 2>();
}

template <>
int templ_fib<0>() {
    return 0;
}

template <>
int templ_fib<1>() {
    return 1;
}

int main() {
//     std::cout << f(14) << '\n';
//     std::cout << g<12>() << '\n';
//     std::cout << fib(42) << '\n'; //~4s
    std::cout << templ_fib<42>() << '\n';
    
    int i = 42;
    if (i % 2 == 0) { // tu kompilator sam podmieni na tańsze działanie ((i & 1) == 0)
        std::cout << "costam\n";
    }
    
}
