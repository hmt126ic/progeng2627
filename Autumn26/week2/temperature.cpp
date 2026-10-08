#include <iostream>

int main() {

    //declares variables as type double
    double celsius, farenheit;

    //takes input from the user and stores in celsius variable
    std::cout << "what is your temperature in degrees celsius" << std::endl;
    std::cin >> celsius;

    //calculates the temperature in farenheit using the users input
    farenheit = (celsius * 9/5.0) + 32;

    //prints the temperature in farenheit to the terminal
    std::cout << "your temperature in degrees farenheit is " << farenheit << std::endl;

}