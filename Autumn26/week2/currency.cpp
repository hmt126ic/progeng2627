#include <iostream>

int main() {

    //declares variables as double type
    double gbp, forex, eur;
    
    //takes input from user and stores it in gbp
    std::cout << "what is the amount of money in GBP?" << std::endl;
    std::cin >> gbp;

    //takes input from user and stores it in forex
    std::cout << "what is the current exchange rate of GBP to EUR as a decimal?" << std::endl;
    std::cin >> forex;

    //calculates users money converted to euros and stores in eur
    eur = gbp * forex;

    //prints the users amount of money in eur
    std::cout << "your money in EUR is €" << eur << std::endl;

}