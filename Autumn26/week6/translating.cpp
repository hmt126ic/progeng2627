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

std::vector<std::string> translate(const std::vector<std::string>& original_vector, const std::vector<std::string>& translation_words) {
    std::vector<std::string> translated_vector = original_vector;
    for(int i{0}; i < translated_vector.size(); i++) {
        for(int j{0}; j < translation_words.size(); j += 2) {
            if(translation_words[j] == original_vector[i]) {
                translated_vector[i] = translation_words[j + 1];
                break;
            }
        }
    }
    return translated_vector;
}

void write_to_output(std::ofstream& outfile, std::vector<std::string>& translated_vector) {
    for(int i{0}; i < translated_vector.size(); i++) {
        outfile << translated_vector[i] << " ";
    }
}



int main() {
    std::string input1, input2;
    std::cout << "please enter the name of the file you want to translate and the file of real meanings:\n";
    std::cin >> input1 >> input2;

    std::vector<std::string> original_vector {};
    file_to_vector(input1, original_vector);

    std::vector<std::string> translation_words {};
    file_to_vector(input2, translation_words);

    if(original_vector == std::vector<std::string>{"failure"}|| translation_words == std::vector<std::string>{"failure"}) {
        std::cout << "failed to open one or more files\n";
        return EXIT_FAILURE;
    }

    std::vector<std::string> translated_vector = translate(original_vector, translation_words);

    std::string output {};
    std::cout << "please enter the name of your output file: \n";
    std::cin >> output;

    std::ofstream outfile;
    outfile.open(output);
    if (!outfile.is_open()) {
        std::cout << "failed to open output file";
        return EXIT_FAILURE;
    }
    write_to_output(outfile, translated_vector);
}