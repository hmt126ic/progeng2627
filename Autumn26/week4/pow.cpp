#include <iostream>

double mypow(double base, int exp){
    double result {base}; 

    if (exp > 0) {
        for (int i{2}; i <= exp; i++) {
            result = result * base;
        }
    }
    else if (exp < 0) {
        for (int i{2}; i <= -exp; i++) {
        result = result * base;
        }
        result = 1 / result;
    }
    else {
        result = 1;
    }
    return result;

}

double sumOfPowers(double x, int n) {
    double sum{0};
    for (int i {1}; i <= n; i++) {
        sum += mypow(x, i);
    }
    return sum;
}

// int main(){
//     std::cout << "2^3: " << mypow(2, 3) << std::endl;
//     std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
//     std::cout << "1^0: " << mypow(1, 0) << std::endl;
//     std::cout << "5^-2: " << mypow(5, -2) << std::endl;
// }

int main() {

    double x {}; //stores the value that is being raised to a power
    int n {}; //stores the exponential

    std::cin >> x >> n; 
    std::cout << "The sum of powers is: " << sumOfPowers(x, n) << "\n";

}