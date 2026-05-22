#include <cstdio>
#include <iostream>

int main(){

    std::string line; getline(std::cin, line);

    const int alphaLength = 26;
    int array[alphaLength] = {0};
    
    for(unsigned k = 0; k < line.size(); k++){++array[line[k] - 'a'];}

    int oddLetters(0);
    for(int k = 0; k < alphaLength; k++){if(array[k] % 2){++oddLetters;}}

    if(oddLetters == 0 || oddLetters%2 == 1){puts("First");}
    else{puts("Second");}

    return 0;

}
