#include <iostream>

int main() {

    int n, steps = 0, curmax;

    std::cout << "please enter a number: ";
    std::cin >> n;
    curmax = n;

    while (n != 1) {
        if ((n%2) == 0) {
            n = n/2;
        }
        else {
            n = (3 * n) + 1;
        }
        if (n > curmax) {
            curmax = n;
        }
        std::cout << n << std::endl;
        steps++;
    }

    std::cout << steps << " steps were required to reach 1." << std::endl;
    std::cout << "The maximum number reached was " << curmax << std::endl;
}