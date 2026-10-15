#include <iostream>
#include <cmath>

int main() {
    int n;
    bool is_square = true;

    std::cout << "Enter as many square numbers as you can!" << std::endl;

    while (is_square == true) {
        std::cout << "enter your number: ";
        std::cin >> n;

        is_square = false;
        for (int i = 1; i <= std::sqrt(n); i++) {
            if ((i*i)==n) {
                std::cout << n << " is a square number." << std::endl;
                is_square = true;
            }
        }
    }
    std::cout << n << " is not a square number." << std::endl;
}