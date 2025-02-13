//
// Created by thoma on 13/02/2025.
//

#include <cmath>
#include <format>
#include <iostream>

bool is_prime(const int n) {
    if (n < 2) return false;
    for (int i {2}; i < sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// int main() {
//     for (int n {0}; n < 100; ++n) {
//         if (is_prime(n)) {
//             std::cout << std::format("{} is prime\n", n);
//         }
//     }
//     return 0;
// }
