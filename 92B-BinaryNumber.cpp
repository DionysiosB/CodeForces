#include <cstdio>
#include <iostream>
#include <string>

int main(){

    std::string inputString("1");
    getline(std::cin, inputString);

    bool middleState(0);
    long counter(0);

    for(int k = inputString.size() - 1; k >= 0; k--){
        if(!middleState && inputString[k] == '0'){++counter;}
        else if(middleState && inputString[k] == '0'){counter += 2;}
        else if(inputString[k] == '1' && k > 0){++counter; middleState = 1;}
        else if(inputString[k] == '1' && middleState == 1){counter += 2;}
    }

    printf("%ld\n", counter);

    return 0;
}
