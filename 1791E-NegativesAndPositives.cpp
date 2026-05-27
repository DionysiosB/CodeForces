#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long long total(0); long mn(1e9 + 7), negcnt(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x < 0){negcnt = 1 - negcnt; x = -x;}
            total += x;
            mn = (mn < x ? mn : x);
        }

        if(negcnt){total -= 2 * mn;}
        printf("%lld\n", total);
    }

}
