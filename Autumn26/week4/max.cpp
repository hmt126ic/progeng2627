#include <iostream>

double max(double num1, double num2) {
    if (num1 > num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int main() {
    std::cout << (max(7, 9) == 9) << "\n";
    std::cout << (max(284, 162) == 284) << "\n";
    std::cout << (max(1465, 1465) == 1465) << "\n";

    int num1 {};
    int num2 {};

    while (true) {
        std::cin >> num1 >> num2;
        std::cout << max(num1, num2);
    }
}