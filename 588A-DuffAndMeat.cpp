#include <cstdio>

int main(){

    long n; scanf("%ld\n", &n);

    long minCost(101);
    long total(0);
    for(int p = 0; p < n; p++){
        
        long amount, price; scanf("%ld %ld\n", &amount, &price);
        if(price < minCost){minCost = price;}
        total += minCost * amount;
    }

    printf("%ld\n", total);

    return 0;
}
