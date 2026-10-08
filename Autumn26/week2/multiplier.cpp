#include <iostream>

int main() {
    //declaring three variables of double type
    double n1, n2, product;

    //takes input from the user for the first number
    std::cout << "please enter the first number" << std::endl;
    std::cin >> n1;

    //takes input from the user for the second number
    std::cout << "please enter the second number" << std::endl;
    std::cin >> n2;


    //calculates the product of the numbers provided
    product = n1 * n2;

    //outputs the product to the user
    std::cout << n1 << " x " << n2 << " = " << product << std::endl;

}