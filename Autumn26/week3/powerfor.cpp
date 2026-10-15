#include <iostream>

int main() {

    int x, power, n;

    std::cout << "Enter your number and the power you would like to raise it to:" << std::endl;
    std::cin >> x >> power;

    n = x;

    for (int i = 0; i < (power - 1); i++) {
        n = n * x;
    }

    std::cout << x << " to the power of " << power << " is " << n << std::endl;
    
}