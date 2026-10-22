#include <iostream>

// function myswap to be used 
// in sort_two_numbers below
// must be included here (beforehand)

void sort_three_numbers(double& s1, double& s2, double& s3){
    double temp{};
    if (s2 > s3) {
        temp = s2;
        s2 = s3;
        s3 = temp;
    }
    if (s1 > s2) {
        temp = s1;
        s1 = s2;
        s2 = temp;
    }
    else if (s1 == s2) {
        if (s3 < s1) {
            temp = s1;
            s1 = s3;
            s3 = temp;
        }
    }
}

int main(){
    double n1, n2, n3;
    std::cout << "please enter three numbers:" << std::endl;
    std::cin >> n1 >> n2 >> n3;
    sort_three_numbers(n1, n2, n3);
    std::cout << n1 << " " << n2 << " " << n3 << std::endl;
}