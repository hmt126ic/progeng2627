#include <iostream>

int main() {

    int n;
    std::cin >> n;

    for (int i1 = 1; i1 <= n; i1++) {
        for (int i2 = 1; i2 <= n; i2++) {
            std::cout << (i2 * i1) << "\t";
        }
        std::cout << std::endl;
    }

}