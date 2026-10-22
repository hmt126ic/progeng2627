#include <iostream>

double max(double num1, double num2, double num3) {
    if (num1 > num2) {
        if (num1 > num3) {
            return num1;
        }
        else {
            return num3;
        }
    }
    else {
        if (num2 > num3) {
            return num2;
        }
        else {
            return num3;
        }
    }
}

int main() {
    std::cout << (max(7, 9, 4) == 9) << "\n";
    std::cout << (max(284, 162, 911) == 911) << "\n";
    std::cout << (max(1465, 1465, 1945) == 1945) << "\n";

    int num1 {};
    int num2 {};
    int num3 {};

    while (true) {
        std::cin >> num1 >> num2 >> num3;
        std::cout << max(num1, num2, num3) << "\n";
    }
}