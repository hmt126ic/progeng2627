#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int main(int argc, char* argv[]) {
    std::ifstream infile;
    infile.open(argv[1]);
    if(!infile.is_open()) {
        std::cout << "failed to open input file \n";
        return EXIT_FAILURE;
    }
    std::string tmp;
    while(infile >> tmp) {
        std::cout << tmp << std::endl;
    }
}
