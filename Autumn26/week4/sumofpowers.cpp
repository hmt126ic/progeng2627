#include <iostream>
#include <cmath>

int main() {

    double x {}; //stores the value that is being raised to a power
    int n {}; //stores the exponential
    double sumOfPowers {0}; //stores the sum of the powers as they are added

    std::cin >> x >> n; 

    //calculates the powers from 1 to n and sums them
    for (int i {1}; i <= n; i++) {
        sumOfPowers += std::pow(x, i);
    }

    std::cout << "The sum of powers is: " << sumOfPowers << "\n";

}