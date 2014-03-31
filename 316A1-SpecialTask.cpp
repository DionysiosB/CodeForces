#include <cstdio>
#include <iostream>

int main(){

    bool letters[10] = {0};
    int potentialDigits(10);
    unsigned long totalCombinations(0);

    std::string input; getline(std::cin, input);
    
    if('A' <= input[0] && input[0] <= 'J'){totalCombinations = --potentialDigits; letters[input[0] - 'A'] = 1;}
    else if(input[0] == '?'){totalCombinations = 9;}
    else{totalCombinations = 1;}

    for(size_t k = 1; k < input.size(); k++){
        if('A' <= input[k] && input[k] <= 'J' && !letters[input[k] - 'A']){
            totalCombinations *= potentialDigits-- ; 
            letters[input[k] - 'A'] = 1;
        }
        else if(input[k] == '?'){totalCombinations *= 10;}
    }

    printf("%lu\n", totalCombinations);

    return 0;
}
