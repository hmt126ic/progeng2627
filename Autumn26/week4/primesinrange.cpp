#include <iostream>
#include <cmath>

int smallest_factor(int n) {
    for (int pf {2}; pf <= std::sqrt(n); pf++) {
        if (n % pf == 0) {
            return pf;
        }
    }
    return 0;
}

int main() {
    int num1{}, num2{};
    std::cin >> num1 >> num2;

    for (int i {num1}; i <= num2; i++) {
        if (smallest_factor(i) == 0) {
            std::cout << i << "\n";
        }
    }
}