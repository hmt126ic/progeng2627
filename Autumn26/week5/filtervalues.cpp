#include <iostream>
#include <vector>

int main() {

    int n {};
    std::cout << "How many numbers do you want to enter?\n";
    std::cin >> n;

    std::vector<double> nums;
    int currNum {};

    for (int i = 0; i < n; i++) {
        std::cin >> currNum;
        nums.push_back(currNum);
    }
    
    int t {};
    std::cout << "Enter the upper bound for numbers you want printed:\n";
    std::cin >> t;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] < t) {
            std::cout << nums[i] << "\n";
        }
    }

}