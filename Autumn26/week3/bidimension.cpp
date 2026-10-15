#include <iostream>

int main() {

    int n, acc1 = 0, acc2 = 0;
    std::cin >> n;

    while (acc1 < n) {
        while (acc2 < n) {
            std::cout << "*";
            acc2++;
        }
        std::cout << std::endl;
        acc2 = 0;
        acc1++;
    }
    
}