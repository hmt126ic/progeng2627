#include <iostream>

int main() {

    int lower = 0, upper = 1000, guess = 500, n;
    std::string correct = "";

    std::cout << "please enter your number: ";
    std::cin >> n;

    while (guess != n) {
        std::cout << "is your number higher or lower than " << guess << "?" << std::endl;
        std::cin >> correct;

        if (correct == "lower") {
            upper = guess;
        }
        else {
            lower = guess;
        }
        guess = (upper + lower) / 2;
    }

    std::cout << "i guess your number is " << guess << "!" << std::endl;

}