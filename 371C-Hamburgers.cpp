#include <cstdio>
#include <iostream>
#include <algorithm>


int main(){
    
    std::string burger(""); getline(std::cin, burger);

    long long numB(0), numS(0), numC(0);
    for(int k = 0; k < burger.size(); k++){
        if(burger[k] == 'B'){++numB;}
        else if(burger[k] == 'S'){++numS;}
        else if(burger[k] == 'C'){++numC;}
    }

    long long haveB(0), haveS(0), haveC(0); scanf("%lld %lld %lld", &haveB, &haveS, &haveC);
    long long priceB(0), priceS(0), priceC(0); scanf("%lld %lld %lld", &priceB, &priceS, &priceC);
    long long budget(0); scanf("%lld", &budget);


    long long currentMin(0), currentMax(10000000000000);

    while(currentMin + 1 < currentMax){

        long long middle = (currentMin + currentMax) / 2;

        long long costB = priceB * ((numB * middle > haveB) ? (numB * middle - haveB) : 0);
        long long costS = priceS * ((numS * middle > haveS) ? (numS * middle - haveS) : 0);
        long long costC = priceC * ((numC * middle > haveC) ? (numC * middle - haveC) : 0);
        long long cost = costB + costS + costC; 

        if(cost <= budget){currentMin = middle;}
        else{currentMax = middle;}

    }

    printf("%lld\n", currentMin);

    return 0;
}
