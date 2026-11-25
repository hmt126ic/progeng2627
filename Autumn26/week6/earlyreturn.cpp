#include <iostream>
#include <fstream>
#include <string>

int main() {

    std::string fileName {""};
    std::cout << "please enter the name of your file:\n";
    std::cin >> fileName;

    std::ifstream infile;
    infile.open(fileName);

    if(!infile.is_open()) {
        std::cout << "error opening file\n";
        return EXIT_FAILURE;
    }

    int tmp {};

    while(infile >> tmp) {
        std::cout << tmp << std::endl;
    }

    infile.close();

}