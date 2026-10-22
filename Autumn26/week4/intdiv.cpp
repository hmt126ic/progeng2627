#include <iostream>

void divAndRem(int a, int b, int& quotient, int& remainder) {
    quotient = a / b;
    remainder = a % b;
}

int main() {
    int a {}, b{}, quotient{}, remainder{};
    std::cout << "Enter the numbers you want to divide: \n";
    std::cin >> a >> b;

    divAndRem(a, b, quotient, remainder);

    std::cout << "The quotient of your division is " << quotient << " and the remainder is " << remainder << "\n";

}