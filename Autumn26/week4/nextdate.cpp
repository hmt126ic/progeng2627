#include <iostream>

bool leap_year(int year){
    bool ly {false};

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                ly = true;
            }
        }
        else {
            ly = true;
        }
    }
    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    if (d1 == 28 && m1 == 2) {
        if (leap_year(y1)) {
            d2 = d1 + 1;
        }
        else {
            m2 = m1 + 1;
            d2 = 1;
        }
    }
    else if (d1 == 29 && m1 == 2) {
        m2 = m1 + 1;
        d2 = 1;
    }
    else {
        if (d1 == 31) {
            if (m1 == 12) {
                y2 = y1 + 1;
                m2 = 1;
                d2 = 1;
            }
            else {
                m2 = m1 + 1;
                d2 = 1;
            }
        }
        else if (d1 == 30) {
            if (m1 == 2 || m1 == 4 || m2 == 6 || m2 == 9 || m2 == 11) {
                m2 = m1 + 1;
                d2 = 1;
            }
            else {
                d2 = d1 + 1;
            }
        }
        else {
            d2 = d1+ 1;
        }
    }
}

int main(){
    // TODO: write a main to test the function
    int d1, m1, y1;
    std::cout << "Please enter the date: \n";
    std::cin >> d1 >> m1 >> y1;

    int d2 {d1}, m2 {m1}, y2 {y1};
    next_date(d1, m1, y1, d2, m2, y2);
    std::cout << "Tomorrows date is: " << d2 << "/" << m2 << "/" << y2 << "\n";
}
