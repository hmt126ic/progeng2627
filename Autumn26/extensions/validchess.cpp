#include <iostream>
#include <string>

bool onBoard (int o1, int o2, int n1, int n2) {
    if ((o1 > 0) && (o1 < 9) && (o2 > 0) && (o2 < 9) && (n1 > 0) && (n1 < 9) && (n2 > 0) && (n2 < 9)) {
        return true;
    }
    return false;
}

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

bool rook (int o1, int o2, int n1, int n2) {
    if (n1 != o1) {
        if (n2 == o2) {
            return true;
        }
        else {
            return false;
        }
    }
    else if (n2 != o2) {
        if (n1 == o1) {
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

bool bishop (int o1, int o2, int n1, int n2) {
    int diff;
    if ((o1 == n1) && (o2 == n2)) {
        return false;
    }
    diff = n1 - o1;
    if ((n2 == o2 + diff) || (n2 == o2 - diff)) {
        return true;
    }
    else {
        return false;
    }
}

void pieceSelect (std::string piece, int o1, int o2, int n1, int n2) {
    bool valid;
    if (piece == "knight") {
        valid = knight(o1, o2, n1, n2);
    }
    else if (piece == "rook") {
        valid = rook(o1, o2, n1, n2);
    }
    else if (piece == "bishop") {
        valid = bishop(o1, o2, n1, n2);
    }

    if (valid == true) {
        std::cout << "Your moves are valid." << std::endl;
    }
    else {
        std::cout << "Your moves are invalid for a " << piece;
    }
}


int main() {

    int o1, o2, n1, n2;
    std::string piece;

    std::cout << "Enter the name of your piece: ";
    std::cin >> piece;

    std::cout << "Enter the coordinates of the original square: ";
    std::cin >> o1 >> o2;

    std::cout << "Enter the coordinates of the new square: ";
    std::cin >> n1 >> n2;

    if (onBoard(o1, o2, n1, n2) == true) {
        pieceSelect(piece, o1, o2, n1, n2);
    }
    else {
        std::cout << "Some of your coordinates are not on the board.";
    }

}