#include <cstdio>

int main(){

    long long initialPrice, maxReduction; scanf("%lld %lld", &initialPrice, &maxReduction);

    long long modNum = 10;
    long long finalPrice = initialPrice;
    while(true){
        long long tail = initialPrice % modNum;
        long long testReduction = (tail + 1) % modNum;

        if(testReduction > maxReduction){break;}

        finalPrice = initialPrice - testReduction;
        modNum *= 10;
    }

    printf("%lld\n", finalPrice);

    return 0;
}
