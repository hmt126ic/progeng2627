#include <iostream>
#include <string>
#include <vector>

// for std::pair
#include <utility>

bool is_palindrome(std::string s){
    // complete this function
    int increasing_search {0};
    int decreasing_search = (s.size() - 1);

    while(increasing_search < decreasing_search) {
        if(s[increasing_search] == ' ') {
            increasing_search++;
        }
        if(s[decreasing_search] == ' ') {
            decreasing_search--;
        }
        if(s[increasing_search] != s[decreasing_search]) {
            return false;
        }
        increasing_search++;
        decreasing_search--;
    }
    return true;
}


int main(){

    std::vector<std::pair<std::string, bool>> test_cases = 
    {
        {"a man a plan a canal panama", true}, 
        {"a man plan a canal panama", false},
        {"a toyota", true},
        {"never odd or even", true},
        {"never even or odd", false}
    };

    for(int i = 0; i < test_cases.size(); i++){
        // each variable of type std::pair has two fields called first and second

        bool test = is_palindrome(test_cases[i].first);

        if(test == test_cases[i].second){
            std::cout << "passed" << std::endl;
        }
        else{
            std::cout << "FAILED" << std::endl;
            std::cout << test_cases[i].first << std::endl;
            std::cout << "expected: " << test_cases[i].second << std::endl;
            std::cout << "got: " << test << std::endl;
        }
    }
}