#include <iostream>

int main() {

    int x, f = 1;

    std::cout << "Enter the number that you want the factorial of: " << std::endl;
    std::cin >> x;

    for (int i = x; i > 0; i--) {
        if (i == x) {
            f = x;
        }
        else {
            f = f * i;
        }
    }

    std::cout << x << "! is " << f << std::endl;

}