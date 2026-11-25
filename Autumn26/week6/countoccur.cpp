#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

void file_to_vector(const std::string& input_file, std::vector<std::string>& vout) {
    std::ifstream infile;
    std::string tmp;

    infile.open(input_file);
    if(!infile.is_open()) {
        vout = {"failure"};
    }
    else {
        while(infile >> tmp) {
            vout.push_back(tmp);
        }
    }
    infile.close();
}

void write_to_output(std::ofstream& outfile, std::vector<std::string>& occurence_words, std::vector<int>& occurences) {
    for(int i{0}; i < occurences.size(); i++) {
        outfile << occurence_words[i] << ": " << occurences[i] << std::endl;
    }
}

std::vector<int> vector_occurences(const std::vector<std::string>& input_as_vector, const std::vector<std::string>& occurence_words) {
    std::vector<int> occurences {};
    int acc {0};
    for(int i{0}; i < occurence_words.size(); i++) {
        for(int j{0}; j < input_as_vector.size(); j++) {
            if(input_as_vector[j] == occurence_words[i]) {
                acc++;
            }
        }
        occurences.push_back(acc);
        acc = 0;
    }
    return occurences;
}


int main() {
    std::string input1, input2;
    std::cout << "please enter the names of your file to read, and the name of the file with the words you want to search for:\n";
    std::cin >> input1 >> input2;

    std::vector<std::string> input_as_vector {};
    file_to_vector(input1, input_as_vector);

    std::vector<std::string> occurence_words {};
    file_to_vector(input2, occurence_words);

    if(input_as_vector == std::vector<std::string>{"failure"}|| occurence_words == std::vector<std::string>{"failure"}) {
        std::cout << "failed to open one or more files\n";
        return EXIT_FAILURE;
    }

    std::string output;
    std::cout << "please enter the name of your output file:\n";
    std::cin >> output;

    std::vector<int> occurences;
    occurences = vector_occurences(input_as_vector, occurence_words);
    
    std::ofstream outfile;
    outfile.open(output);
    if(!outfile.is_open()) {
        std::cout << "failed to open output file\n";
        return EXIT_FAILURE;
    }
    write_to_output(outfile, occurence_words, occurences);
    outfile.close();

}