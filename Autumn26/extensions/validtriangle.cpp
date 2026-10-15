#include <iostream>
#include <cmath>

int main() {

    double a, b, c, s, area;

    std::cout << "Enter three side lengths: ";
    std::cin >> a >> b >> c;

    //Check whether the sides form a valid triangle
    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {
        if ((a == b) && (b == c)) {
            std::cout << "Your triangle is an equilateral triangle." << std::endl;
        }
        else if ((a==b) || (a==c) || (b==c)) {
            std::cout << "Your triangle is an isosceles triangle." << std::endl;
        }
        else {
            std::cout << "Your triangle is a scalene triangle." << std::endl;
        }
        std::cout << "The perimeter of your triangle is " << a + b + c << "." << std::endl;
        s = 0.5 * (a + b + c);
        area = std::sqrt(s * (s - a) * (s - b) * (s - c));
        std::cout << "The area of your triangle is " << area << "." << std::endl;
    }
    else {
        std::cout << "This triangle is invalid." << std::endl;
    }
}