#include <iostream>
#include <string>
#include <vector>

//Makes the grid of hashtags which is edited by row_search and column_search to form the solution.
void hashtag_grid_maker(std::vector<std::string>& solution, const std::vector<std::string>& grid) {
    std::string hashtag_row;

    //Generates a string which matches the length of each row in the grid made out of hashtags.
    for(int i{0}; i < grid[0].size(); i++) {
        hashtag_row.push_back('#');
    }

    //Uses the row of hashtags string to generate the grid of hashtags.
    for(int i{0}; i < grid.size(); i++) {
        solution.push_back(hashtag_row);
    }
}

/*
Searches through each row of the grid for the given word. 
If found, replaces corresponding # characters in solution grid with word and returns true. 
It returns false if the word isn't found.
*/
bool row_search(std::string word, const std::vector<std::string>& grid, std::vector<std::string>& solution) {

    //Iterates through each row of the grid.
    for(int row{0}; row < grid.size(); row++) {

        //Iterates through each character in the current row.
        for(int column{0}; column < grid[0].size(); column++) {

            //Iterates through the word and checks how many subsequent characters in the row are correct.
            for(int word_index{0}; (word_index < word.size()) && (word_index != -1); word_index++) {

                if(word[word_index] != grid[row][column + word_index]) {
                    word_index = -2;
                }
                //If the whole word has been checked, then replaces corresponding # characters in solution grid.
                else if (word_index == word.size() - 1){

                    for(int i{0}; i < word.size(); i++) {
                        solution[row][column + i] = word[i];
                    }
                    return true;

                } 
            }
        }
    }
    return false;
}

//Does the same job as row_search but for each column in the grid.
bool column_search(std::string word, const std::vector<std::string>& grid, std::vector<std::string>& solution) {
   
    int row_length = grid[0].size();

    //Iterates through each column of the grid.
    for(int column{0}; column < row_length; column++) {

        //Iterates through each row of the grid.
        for(int row{0}; row < grid.size(); row++){

            //Iterates through the word and checks how many subsequent characters in the row are correct.
            for(int word_index{0}; (word_index < word.size()) && (word_index != -1); word_index++) {

                if(word[word_index] != grid[row + word_index][column]) {
                    word_index = -2;
                }

                //If the whole word has been checked, then replaces corresponding # characters in solution grid.
                else if (word_index == word.size() - 1){

                    for(int i{0}; i < word.size(); i++) {
                        solution[row+i][column] = word[i];
                    }
                    return true;

                }
            }
        }
    }
    return false;
}

/*
Calls the hashtag grid generator function.
Calls the row search first. If this returns false, then it calls the column search.
If both return false, then it puts the current word in the not_found vector.
*/
void find_words(
    const std::vector<std::string>& grid, 
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
){
    hashtag_grid_maker(solution, grid);

    //Iterates through each word in the words vector
    for(int i{0}; i < words.size(); i++) {

        //Does the row search and excecutes if it fails.
        if(!row_search(words[i], grid, solution)) {

            //Does the column search and executes if it fails.
            if(!column_search(words[i], grid, solution)) {
                not_found.push_back(words[i]);
            }
        }
    }
}

//Tests the function of the program.
int main() {
    std::vector<std::string> solution;
    std::vector<std::string> not_found;
    std::vector<std::vector<std::string>> testing_grids = {
    {
        "pepear",
        "efjabe",
        "applex",
        "croben",
        "halpte"
    },
    {
        "abit",
        "eebo",
        "atob",
        "batp"
    },
    {
        "jfjag",
        "ahghw",
        "giwgn",
        "jwibt",
        "jgiab",
        "jgoat"
    },
    {
        "blublue",
        "garnree",
        "arenapi",
        "eenmtin",
        "idamort"
    }
    };
    std::vector<std::vector<std::string>> expected_solutions = {
    {
        "p#pear",
        "e###b#",
        "apple#",
        "c###e#",
        "h###t#"
    },
    {
        "#bit",
        "#eb#",
        "#to#",
        "bat#"
    },
    {
        "#####",
        "#####",
        "#####",
        "#####",
        "#####",
        "#####"
    },
    {
        "###blue",
        "#######",
        "#r#####",
        "#e#####",
        "#d#####"
    }
    };
    std::vector<std::vector<std::string>> testing_words = 
    {
        {"pear", "apple", "mango", "beet", "peach", "plum"},
        {"bit", "bet", "bot", "bat", "but"},
        {"hello", "cloud", "day", "night"},
        {"red", "orange", "green", "blue", "pink"}
    };
    std::vector<std::vector<std::string>> expected_not_found = 
    {
        {"mango", "plum"},
        {"but"},
        {"hello", "cloud", "day", "night"},
        {"orange", "green", "pink"}
    };
    for(int i{0}; i < testing_grids.size(); i++) {
        std::cout << "\n\n\n------------------("<< i + 1 << ")------------------\n";
        solution.clear();
        not_found.clear();
        find_words(testing_grids[i], testing_words[i], solution, not_found);
        
        if(solution == expected_solutions[i] && not_found == expected_not_found[i]) {
            std::cout << "test passed" << std::endl;
        }
        else {
            std::cout << "test failed" << std::endl;
        }
        
        std::cout << "\nsolution:" << std::endl;
        for(int i = 0; i < solution.size(); i++){
            std::cout << solution[i] << std::endl;
        }

        std::cout << "\nnot found:" << std::endl;
        for(int i = 0; i < not_found.size(); i++){
            std::cout << not_found[i] << std::endl;
        }
        std::cout << "-------------------------------------";
    }
}
