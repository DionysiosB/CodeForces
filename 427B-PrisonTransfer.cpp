#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    long n(0), t(0), c(0); scanf("%ld %ld %ld", &n, &t, &c);
    
    std::vector<long> highPos;

    highPos.push_back(-1);
    for(int k = 0; k < n; k++){
        long temp(0); scanf("%ld", &temp);
        if(temp > t){highPos.push_back(k);}
    }
    highPos.push_back(n);

    long ways(0);
    for(int k = 0; k + 1 < highPos.size(); k++){
        long diff = highPos[k + 1] - highPos[k];
        if(diff > c){ways += diff - c;}
    }

    printf("%ld\n", ways);

    return 0;
}
