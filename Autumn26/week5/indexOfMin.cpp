#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin) {

    int smallestIndex {0};

    if (vin.size() == 0) {
        smallestIndex = -1;
    }

    for (int i {1}; i < vin.size(); i++) {
        if (vin[i] < vin[smallestIndex]) {
            smallestIndex = i;
        }
    }

    return smallestIndex;

}

int main() {

    std::cout << min_vector_element({1, 5, 4, 2, 7, 8, 2, 9}); //expected 0
    std::cout << min_vector_element({15, 8, 9, 7, 9, 10, 3, 4, 1}); //expected 8
    std::cout << min_vector_element({100, 115, 143, 12, 764, 101, 256}); //expected 4

}