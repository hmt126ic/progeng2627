#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin) {
    for (int i {0}; i < vin.size(); i++) {
        if (vin[i] == n) {
            return i;
        }
    }
    return -1;
}

int main() {

    std::cout << search_vector(3, {5, 4, 2, 3, 5, 3, 12, 4}) << std::endl; //expected 3
    std::cout << search_vector(412, {111, 254, 646, 193, 192, 412}) << std::endl; //expected 5
    std::cout << search_vector(121, {121, 52, 636, 736, 123, 121, 512}) << std::endl; //expected 0
    std::cout << search_vector(7, {150, 17, 295, 294, 105, 592, 501}) << std::endl; //expected -1


}