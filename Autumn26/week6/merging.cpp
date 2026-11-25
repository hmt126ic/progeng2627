#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged) {
    merged = {};
    int acc1{0}, acc2{0};
    while (acc1 != v1.size() && acc2 != v2.size()) {
        if (v1[acc1] >= v2[acc2]) {
            merged.push_back(v2[acc2]);
            acc2++;
        }
        else {
            merged.push_back(v1[acc1]);
            acc1++;
        }
    }
    if (acc1 == v1.size()) {
        for(int i{acc2}; i < v2.size(); i++) {
            merged.push_back(v2[i]);
        }
    }
    else {
        for(int i{acc1}; i < v1.size(); i++) {
            merged.push_back(v1[i]);
        }
    }
}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }

    v1 = {4, 5, 5, 7};
    v2 = {1, 2, 5, 6, 9, 11};
    expected_output = {1, 2, 4, 5, 5, 5, 6, 7, 9, 11};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }

    v1 = {0, 1, 9, 11};
    v2 = {1, 5, 9, 11, 12};
    expected_output = {0, 1, 1, 5, 9, 9, 11, 11, 12};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }

    v1 = {4, 4, 4};
    v2 = {1, 2, 4, 6, 7};
    expected_output = {1, 2, 4, 4, 4, 4, 6, 7};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}