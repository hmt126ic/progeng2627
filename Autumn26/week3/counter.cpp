#include <iostream>

int main() {

    double x, acc;
    int n, i = 0;

    std::cin >> x >> n;
    acc = x;

    while (i < n) {
        acc += x;
        i += 1;
    }

    std::cout << x << " added to itself " << n << " times is " << acc;
}