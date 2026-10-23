#include <iostream>
#include <cstdlib>
#include <ctime>

bool knight (int o1, int o2, int n1, int n2) {
    if ((n1 == o1 - 2) || (n1 == o1 + 2)) {
            if ((n2 == o2 + 1) || (n2 == o2 - 1)) {
                return true;
            }
            else {
                return false;
            }
        }
        else if ((n1 == o1 + 1) || (n1 == o1 - 1)) {
            if ((n2 == o2 + 2) || (n2 == o2 - 2)) {
                return true;
            }
            else {
                return false;
            }
        }
        else {
            return false;
        }
}

int main() {
    int newRow {};
    int newCol {};
    bool valid {};
    // Generate and display a random starting position
    std::srand(std::time(NULL));
    int row = std::rand() % 6 + 2;
    int col = std::rand() % 6 + 2;
    int originalRow {row};
    int originalCol {col};
    std::cout << "The starting position of your knight is (" << row << ", " << col << ").\n";
    // Initialise the move counter
    int moves = 0;
    // While the knight has not reached a corner square:
    while ((col != 8 && col != 1) && (row != 8 && row != 1)) {
        if (moves == 5) {
            std::cout << "You reached 5 moves. Please try again to find a shorter route.\n";
            moves = 0;
            col = originalCol;
            row = originalRow;
            std::cout << "The starting position of your knight is (" << row << ", " << col << ").\n";
        }
        std::cout << "Enter your destination coordinates:\n";
        std::cin >> newRow >> newCol;
        valid = knight(row, col, newRow, newCol);
        if (valid == true) {
            moves++;
            row = newRow;
            col = newCol;
            std::cout << "Your new coordinates are (" << row << ", " << col << ").\n";
        }
        else {
            std::cout << "Your move is invalid.\nYour coordinates are still (" << row << ", " << col << ").\n";
        }
    }
    // Display the total number of valid moves
    // taken to reach a corner square.
    std::cout << "You escaped in " << moves << " moves!\n";
}