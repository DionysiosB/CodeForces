#include <cstdio>

long long totalSum(long x, long d){

    if(d <= 1){return -1;}
    long long output(0), currentDivisor(1);
    while(currentDivisor <= x){
        output += x / currentDivisor;
        currentDivisor *= d;
    }

    return output;
}


int main(){

    long long n(0), k(0); scanf("%lld %lld", &n, &k);

    long long currentMin = 1;
    long long currentMax = n;

    while(currentMin + 1 < currentMax){
        long long currentMid = (currentMin + currentMax) / 2;
        long long testMid = totalSum(currentMid, k);
        if(testMid < n){currentMin = currentMid;}
        else if(testMid >= n){currentMax = currentMid;}
    }

    printf("%lld\n", currentMax);

    return 0;
}
