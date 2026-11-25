#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main() {

    std::string inputfilename;
    std::cout << "please enter the name of your input file:\n";
    std::cin >> inputfilename;

    std::ifstream infile;
    infile.open(inputfilename);

    std::vector<int> v;

    if (!infile.is_open()) {
        std::cout << "error opening file\n";
        return EXIT_FAILURE;
    }

    int tmp;

    while (infile >> tmp) {
        v.push_back(tmp);
    }

    infile.close();

    std::string outputfilename;
    std::cout << "please enter the name of your output file:\n";
    std::cin >> outputfilename;

    std::ofstream outfile;
    outfile.open(outputfilename);

    if (!outfile.is_open()) {
        std::cout << "error opening file\n";
        return EXIT_FAILURE;
    }

    for(int i(v.size()); i >= 0; i--) {
        outfile << v[i] << std::endl;
    }
    outfile.close();
}