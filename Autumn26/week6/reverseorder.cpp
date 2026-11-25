#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

int main(){
    std::ifstream infile; 
    infile.open("strings.txt");

    std::vector<std::string> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 

    // TODO: print the content of v in reversed order
    for(int i(v.size()); i >= 0; i--) {
        std::cout << v[i] << std::endl;
    }
}