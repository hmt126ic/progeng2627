#include <iostream>

int main() {

    int n, acc = 0;
    double average = 0, i = 0.0;

    std::cout << "enter a number:" << std::endl;
    std::cin >> n;

    while (n != 0) {
        i += 1;
        acc += n;
        average = acc / i;
        
        std::cout << "the average so far is:" << std::endl
        << average << std::endl
        << "enter a number:" << std::endl;

        std::cin >> n;
    }
}