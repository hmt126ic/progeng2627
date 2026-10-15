#include <iostream>

int main() {

    int n, curr = 1, last = 0;

    std::cout << "how many digits of the fibonacci sequence would you like?" << std::endl;
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        std::cout << curr << "\t";
        curr = curr + last;
        last = curr - last;
    }

}