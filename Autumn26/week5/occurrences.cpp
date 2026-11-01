#include <iostream>
#include <vector>

int main() {

    int n {};
    std::cout << "How many numbers do you want to enter?\n";
    std::cin >> n;

    std::vector<int> nums;
    int currNum {};

    std::cout << "Please enter your numbers:\n";

    for (int i = 0; i < n; i++) {
        std::cin >> currNum;
        nums.push_back(currNum);
    }
    
    int s {};
    int acc {0};
    std::vector<int> indices;
    std::cout << "Enter the number you want to check for occurrences:\n";
    std::cin >> s;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == s) {
            acc++;
            indices.push_back(i);
        }
    }

    std::cout << s << " occured " << acc << " times at indices:\n";

    for (int i = 0; i < indices.size(); i++) {
        std::cout << indices[i] << "\n";
    }

}