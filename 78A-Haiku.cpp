#include <cstdio>
#include <iostream>

int main(){

    std::string currentLine;
    bool output(1); size_t numVowels(0);

    numVowels = 0; getline(std::cin, currentLine);
    for(size_t index = 0; index < currentLine.size(); index++){
        char currentLetter = tolower(currentLine[index]);
        if(currentLetter == 'a' || currentLetter == 'e' || currentLetter == 'u' || currentLetter == 'i' || currentLetter =='o'){++numVowels;}
    }
    if(numVowels != 5){output = 0;}

    numVowels = 0; getline(std::cin, currentLine);
    for(size_t index = 0; index < currentLine.size(); index++){
        char currentLetter = tolower(currentLine[index]);
        if(currentLetter == 'a' || currentLetter == 'e' || currentLetter == 'u' || currentLetter == 'i' || currentLetter =='o'){++numVowels;}
    }
    if(numVowels != 7){output = 0;}

    numVowels = 0; getline(std::cin, currentLine);
    for(size_t index = 0; index < currentLine.size(); index++){
        char currentLetter = tolower(currentLine[index]);
        if(currentLetter == 'a' || currentLetter == 'e' || currentLetter == 'u' || currentLetter == 'i' || currentLetter =='o'){++numVowels;}
    }
    if(numVowels != 5){output = 0;}

    if(output){puts("YES");}
    else{puts("NO");}


    return 0;
}
