#include <iostream>

int main() {

    int a, b, acc = 0;

    std::cout << "please enter two integers that you would like to divide seperated by a space:" << std::endl
    << "(e.g. 5 2 --> 5/2)" << std::endl;
    std::cin >> a >> b;
    std::cout << "we want to perform the integer division of " << a << " by " << b << std::endl << std::endl;

    while (a > b) {
        std::cout << a << " is greater than " << b << " so we subtract " << b << " from " << a << std::endl;
        a -= b;
        acc += 1;
        std::cout << "we get " << a << std::endl << std::endl;
    }

    std::cout << a << " is not greater than " << b << " so we terminate the loop" << std::endl << std::endl;
    std::cout << "the quotient is the number of subtractions: " << acc << std::endl
    << "the remainder is the number we have left at the end: " << a << std::endl;

}