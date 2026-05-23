#include <cstdio>
#include <iostream>

int main(){

    long n; scanf("%ld\n", &n);
    int64_t total(0);
    long current(0);
    while(n--){
        long b; scanf("%ld", &b);
        long diff = b - current;
        if(diff < 0){diff = -diff;}
        total += diff;
        current = b;
    }

    printf("%lld\n", total);

    return 0;
}
