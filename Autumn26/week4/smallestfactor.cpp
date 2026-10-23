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
    int num {};
    std::cout << "Enter your number: \n";
    std::cin >> num;
    std::cout << "The smallest prime factor of your number is " << smallest_factor(num) << "\n";
}