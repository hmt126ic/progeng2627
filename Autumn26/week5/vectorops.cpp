#include <iostream>
#include <vector>

int main() {

    std::vector<int> nums;
    nums.push_back(5);
    nums.push_back(8);
    nums.push_back(3);

    std::cout << nums[0] * (nums[1] + nums[2]);

}