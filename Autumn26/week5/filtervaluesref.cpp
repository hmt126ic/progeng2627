#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout) {
    for (int i{0}; i < vin.size(); i++) {
        if (vin[i] < t) {
            vout.push_back(vin[i]);
        }
    }
}

int main() {

    std::vector<double> vin {1.5, 7.2, 4.7, 9.5, 104.6, 192.1, 10.34, 50.31, 25.6, 0.0};
    double t{50.31};
    std::vector<double> vout {};

    filter_v(vin, t, vout);

    for (int i{0}; i < vout.size(); i++) {
        std::cout << vout[i] << std::endl;
    }

}