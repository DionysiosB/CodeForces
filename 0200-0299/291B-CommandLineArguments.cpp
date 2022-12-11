#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    std::string input; getline(std::cin, input);
    std::vector<std::string> lexemes;

    bool inword   = 0;
    bool inquotes = 0;
    std::string currentWord = "";

    for(int k = 0; k < input.size(); k++){

        if(input[k] == '"'){
            inword = 1 - inword; inquotes = 1 - inquotes;
            if(!inword){lexemes.push_back(currentWord); currentWord = "";}
        }
        else if(input[k] == ' ' && !inquotes){
            inword = 0;
            if(currentWord.size() > 0){lexemes.push_back(currentWord); currentWord = "";}
        }
        else{inword = 1; currentWord += input[k];}
    }


    if(currentWord.size() > 0){lexemes.push_back(currentWord);}

    for(int k = 0; k < lexemes.size(); k++){std::cout << "<" << lexemes[k] << ">\n";}

    return 0;
}
