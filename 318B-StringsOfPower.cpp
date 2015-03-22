#include <cstdio>
#include <iostream>

int main(){

    std::string heavy = "heavy";
    std::string metal = "metal";

    std::string input(""); getline(std::cin, input);


    long nextHeavy = input.find("heavy", 0);
    long nextMetal = input.find("metal", 0);
    long heavySoFar = 0;
    long long output(0);


    do{
        if(nextHeavy != std::string::npos && nextHeavy <= nextMetal){++heavySoFar; nextHeavy = input.find("heavy", nextHeavy + 5);}
        else if(nextMetal != std::string::npos){output += heavySoFar; nextMetal = input.find("metal", nextMetal + 5);}
        else{break;}
    } while(nextHeavy != std::string::npos || nextMetal != std::string::npos);


    printf("%lld\n", output); 

    return 0;
}
