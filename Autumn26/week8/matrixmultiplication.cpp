#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>

std::vector<double> line_to_vector(const std::string& line) {

    std::stringstream ss;
    std::string tmp;
    std::vector<double> out;

    ss << line;
    while(ss >> tmp) {
        out.push_back(std::stod(tmp));
    }
    return out;
}

std::vector<std::vector<double>> read_matrix_from_file(std::string input_file) {

    std::ifstream infile;
    infile.open(input_file);
    if(!infile.is_open()) {
        std::cout << "error opening file " << input_file << std::endl;
        std::exit(EXIT_FAILURE);
    }

    std::string line;
    std::vector<std::vector<double>> out;

    while(std::getline(infile, line)) {
        out.push_back(line_to_vector(line));
    }
    return out;
}

std::vector<double> column_extract(const std::vector<std::vector<double>>& vin, int column) {
    std::vector<double> out;
    for(int i{0}; i < vin.size(); i++) {
        out.push_back(vin[i][column]);
    }
    return out;
}

double scalar_product(const std::vector<double>& v1, const std::vector<double>& v2) {
    double scalar_prod{0};
    for(int i{0}; i < v1.size(); i++) {
        scalar_prod += v1[i] * v2[i];
    }
    return scalar_prod;
}

std::vector<std::vector<double>> matrix_multiplier(const std::vector<std::vector<double>>& m1, const std::vector<std::vector<double>>& m2) {
    std::vector<std::vector<double>> out;
    for(int row {0}; row < m1.size(); row++) {
        std::vector<double> current_row;
        for(int column{0}; column < m2[0].size(); column++) {
            current_row.push_back(scalar_product(m1[row], column_extract(m2, column)));
        }
        out.push_back(current_row);
    }
    return out;
}

std::string matrix_to_string(std::vector<std::vector<double>> m) {
    std::stringstream out;
    out << std::fixed << std::setprecision(2);

    for(int i{0}; i < m.size(); i++) {
        for(int j{0}; j < m[0].size(); j++) {
            out << m[i][j] << "\t";
        }
        out << "\n";
    }
    return out.str();
}

int main(int argc, char* argv[]) {
    std::vector<std::vector<double>> m1(read_matrix_from_file(argv[1]));
    std::vector<std::vector<double>> m2(read_matrix_from_file(argv[2]));
    std::vector<std::vector<double>> mout(matrix_multiplier(m1, m2));

    std::cout << matrix_to_string(m1) << std::endl;
    std::cout << "x" << std::endl;
    std::cout << matrix_to_string(m2) << std::endl;
    std::cout << "=" << std::endl;
    std::cout << matrix_to_string(mout) << std::endl;

}