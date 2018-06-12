#include <cstdio>
#include <iostream>
#include <string>

int main(){

    std::string record(""); getline(std::cin, record);

    int total(0), currentMin(0), currentMax(0);

    for(int k = 0; k < record.size(); k++){

        if(record[k] == '+'){++total;}
        else if(record[k] == '-'){--total;}

        if(total > currentMax){currentMax = total;}
        else if(total < currentMin){currentMin = total;}
    }

    printf("%d\n", currentMax - currentMin);

    return 0;
}
