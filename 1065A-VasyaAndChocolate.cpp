#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long long s, a, b, c; scanf("%lld %lld %lld %lld", &s, &a, &b, &c);
        long long buy = (s / c); 
        long long total = buy + (buy / a) * b;
        printf("%lld\n", total);
    }

    return 0;
}
