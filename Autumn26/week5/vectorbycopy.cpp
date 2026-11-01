#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;

    int numsStored {};
    int currentNumber{};

    std::cout << "How many integers would you like to sum?\n";
    std::cin >> numsStored;

    std::cout << "Please enter your numbers:\n";
    
    for (int i {0}; i < numsStored; i++) {
        std::cin >> currentNumber;
        v.push_back(currentNumber);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}