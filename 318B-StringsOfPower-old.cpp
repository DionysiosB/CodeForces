#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    std::string heavy = "heavy";
    std::string metal = "metal";

    std::vector<long> heavyPos;
    std::vector<long> metalPos;

    std::string input(""); getline(std::cin, input);

    long current = -1;
    do{
        current = input.find("heavy", current + 1);
        if(current != std::string::npos){heavyPos.push_back(current);}
        else{break;}
    } while(current != std::string::npos);

    current = -1;
    do{
        current = input.find(metal, current + 1);
        if(current != std::string::npos){metalPos.push_back(current);}
        else{break;}
    } while(current != std::string::npos);

    long output = 0;
    for(long k = 0; k < heavyPos.size(); k++){
        long before;
        for(before = 0; metalPos[before] < heavyPos[k]; before++);
        output += metalPos.size() - before;
    }

    printf("%ld\n", output); 

    return 0;
}
