#include <cstdio>
#include <iostream>

int main(){

    std::string first(""); getline(std::cin, first);
    std::string second(""); getline(std::cin, second);
    int firstScore(0), secondScore(0);
    
    for(int round = 0; round < first.size() / 2; round++){

        char playA = first[2 * round];
        char playB = second[2 * round];

        if(playA == playB){continue;}

        if((playA == '(' && playB == '8') || (playA == '[' && playB == '(') || (playA == '8' && playB == '[')){++firstScore;}
        else{++secondScore;}

    }

    if(firstScore > secondScore){puts("TEAM 1 WINS");}
    else if(firstScore < secondScore){puts("TEAM 2 WINS");}
    else{puts("TIE");}

    return 0;
}
