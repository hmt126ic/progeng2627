#include <iostream>

int main() {

    //declares variables with type double
    double weight, height, bmi;

    //takes input from the user and stores in weight
    std::cout << "what is your weight in kilograms?" << std::endl;
    std::cin >> weight;

    //takes input from the user and stores in height
    std::cout << "what is your height in metres?" << std::endl;
    std::cin >> height;

    //calculates BMI using the user input
    bmi = weight / (height*height);

    //outputs the BMI to the terminal
    std::cout << "your BMI is " << bmi << std::endl;

}