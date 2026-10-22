#include <iostream>

void perimeterAndArea(double s1, double s2, double& a, double& p) {
    a = s1 * s2;
    p = 2 * s1 + 2 * s2;
}

int main() {
    double s1 {}, s2 {}, area {}, perimeter {};
    std::cout << "Enter the side lengths of your rectangle:\n";
    std::cin >> s1 >> s2;
    
    perimeterAndArea(s1, s2, area, perimeter);

    std::cout << "The area of your rectangle is " << area << " and the perimeter is " << perimeter << "\n";
}