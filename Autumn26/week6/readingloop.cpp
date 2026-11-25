#include <iostream>
#include <fstream>

int main() {
    std::ifstream infile;
    infile.open("input.txt");

    if(infile.is_open()) {
        int tmp {};
        int sum{};

        while(infile >> tmp) {
            std::cout << tmp << std::endl;
            sum += tmp;
        }

        std::cout << "the sum of all those numbers is " << sum << std::endl;

        infile.close();
    }
    else {
        std::cout << "error opening file" << std::endl;
    }
}