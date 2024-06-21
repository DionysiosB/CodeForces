#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long l, r; scanf("%ld %ld", &l, &r);
        long cnt(0); long x(1);
        for(long p = 1; 2 * p <= r; p *= 2, ++cnt);
        printf("%ld\n", cnt);
    }

}
