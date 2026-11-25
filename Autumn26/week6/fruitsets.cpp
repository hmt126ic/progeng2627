#include <iostream>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin) {
    int index;
    for(int i{0}; i < vin.size(); i++) {
        if (vin[i] == s) {
            return index;
        }
    }
    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    for(int i{0}; i < vin1.size(); i++) {
        vout.push_back(vin1[i]);
    }
    for(int i{0}; i < vin2.size(); i++) {
        if (search_vector(vin2[i], vin1) == -1) {
            vout.push_back(vin2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    for(int i{0}; i < vin1.size(); i++) {
        if (search_vector(vin1[i], vin2) != -1) {
            vout.push_back(vin1[i]);
        }
    }
}

int main() {
    std::string input_filename1 {};
    std::string input_filename2 {};
    std::cout << "please enter the names of your two input files: \n";
    std::cin >> input_filename1 >> input_filename2;

    std::ifstream infile1;
    std::ifstream infile2;
    std::vector<std::string> vin1;
    std::vector<std::string> vin2;

    std::string tmp;

    infile1.open(input_filename1);
    if (!infile1.is_open()) {
        std::cout << "error opening file\n";
        return EXIT_FAILURE;
    }
    while (infile1 >> tmp) {
        vin1.push_back(tmp);
    }
    infile1.close();

    infile2.open(input_filename2);
    if (!infile2.is_open()) {
        std::cout << "error opening file\n";
        return EXIT_FAILURE;
    }
    while (infile2 >> tmp) {
        vin2.push_back(tmp);
    }
    infile2.close();

    std::vector<std::string> vector_intersect;
    std::vector<std::string> vector_union;

    intersection_vector(vin1, vin2, vector_intersect);
    union_vector(vin1, vin2, vector_union);

    std::ofstream intersect_output;
    std::ofstream union_output;

    intersect_output.open("intersection.txt");
    if (!intersect_output.is_open()) {
        std::cout << "error opening file\n";
        return EXIT_FAILURE;
    }
    for (int i{0}; i < vector_intersect.size(); i++) {
        intersect_output << vector_intersect[i] << std::endl;
    }
    intersect_output.close();

    union_output.open("union.txt");
    if (!union_output.is_open()) {
        std::cout << "error opening file\n";
        return EXIT_FAILURE;
    }
    for (int i{0}; i < vector_union.size(); i++) {
        union_output << vector_union[i] << std::endl;
    }
    union_output.close();

}