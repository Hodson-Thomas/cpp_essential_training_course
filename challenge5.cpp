//
// Created by thoma on 13/02/2025.
//

#include <format>
#include <iostream>

using std::format;
using std::cout;

template<typename T>
T factorial(T n) {
    T result = n;
    while (n > 1) {
        result *= --n;
    }
    return result;
}

int main() {
    unsigned long n {5};
    unsigned int m {5};

    cout << format("Factorial of long {} = {}\n", n, factorial(n));
    cout << format("Factorial of int  {} = {}\n", m, factorial(m));
    return 0;
}