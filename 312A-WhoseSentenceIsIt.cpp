#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

int main(){

    std::string currentLine;
    int n(0);
    getline(std::cin, currentLine);
    n = atoi(currentLine.c_str());

    while(n--){
        getline(std::cin, currentLine);
        int firstPos = currentLine.find("miao.");
        bool firstCondition  = (firstPos == 0);
        bool secondCondition = (currentLine.size() >= 5 && currentLine.substr(currentLine.size() - 5) == "lala.");
        if(firstCondition && !secondCondition){puts("Rainbow's");}
        else if(!firstCondition && secondCondition){puts("Freda's");}
        else{puts("OMG>.< I don't know!");}
    }
    return 0;
}
