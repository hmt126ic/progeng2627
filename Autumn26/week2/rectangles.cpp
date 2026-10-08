#include <iostream>

int main() {

    //declares variables as double type
    double a, b, perimeter, area;

    //takes input from user and stores in a
    std::cout << "what is the length of side 1?" << std::endl;
    std::cin >> a;

    //takes input from user and stores in b
    std::cout << "what is the length of side 2" << std::endl;
    std::cin >> b;

    //calculates perimeter and area using a and b
    perimeter = (2 * a) + (2 * b);
    area = a * b;

    //prints the perimeter and area to the terminal
    std::cout << "the perimeter of the rectangle is " << perimeter << std::endl;
    std::cout << "the area of the rectangle is " << area << std::endl;

}