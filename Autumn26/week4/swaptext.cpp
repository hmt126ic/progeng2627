#include <iostream>
#include <string>

void swapText(std::string& text1, std::string& text2) {
    std::string tmp;
    tmp = text1;
    text1 = text2;
    text2 = tmp;
}

int main() {
    std::string first{"i am first!"};
    std::string second{"i am second!"};

    std::cout << "the variable first says: " << first << "\n";
    std::cout << "the variable second says: " << second << "\n";
    
    swapText(first, second);
    std::cout << "\nswapping\n\n";

    std::cout << "the variable first says: " << first << "\n";
    std::cout << "the variable second says: " << second << "\n";

    
}