//
// Created by thoma on 13/02/2025.
//

#include <format>
#include <iostream>

unsigned long factorial(const unsigned long n) {
    unsigned long result {1};
    for (auto i = n; i > 1; --i) {
        result *= i;
    }
    return result;
}

// int main() {
//     std::cout << std::format("Factorial {} = {}", 5, factorial(5));
//     return 0;
// }