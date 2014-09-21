#include <cstdio>
#include <iostream>
#include <algorithm>

int main(){

    bool firstOne(0), firstSix(0), firstEight(0), firstNine(0);
    int currentMod(0), zeroCount(0);

    std::string inputString(""); getline(std::cin, inputString);

    for(int k = 0; k < inputString.size(); k++){
        char currentDigit = inputString[k];

        if(currentDigit == '0'){++zeroCount;}
        else if(currentDigit == '1'){
            if(firstOne){std::cout << currentDigit; currentMod = (10 * currentMod + (currentDigit - '0'))%7;}
            else{firstOne = true;}
        }
        else if(currentDigit == '6'){
            if(firstSix){std::cout << currentDigit; currentMod = (10 * currentMod + (currentDigit - '0'))%7;}
            else{firstSix = true;}
        }
        else if(currentDigit == '8'){
            if(firstEight){std::cout << currentDigit; currentMod = (10 * currentMod + (currentDigit - '0'))%7;}
            else{firstEight = true;}
        }
        else if(currentDigit == '9'){
            if(firstNine){std::cout << currentDigit; currentMod = (10 * currentMod + (currentDigit - '0'))%7;}
            else{firstNine = true;}
        }
        else{std::cout << currentDigit; currentMod = (10 * currentMod + (currentDigit - '0'))%7;}
    }


    int permDigits[4] = {1,6,8,9};
    do{
        if((10000 * currentMod + 1000 * permDigits[0] + 100 * permDigits[1] + 10 * permDigits[2] + permDigits[3]) % 7 == 0){
            std::cout << permDigits[0] << permDigits[1] << permDigits[2] << permDigits[3]; break;}
    }while(std::next_permutation(permDigits, permDigits + 4));


    for(int k = 0; k < zeroCount; k++){printf("0");}
    std::cout << std::endl;

    return 0;
}
