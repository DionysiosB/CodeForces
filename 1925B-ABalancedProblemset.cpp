#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, n; scanf("%ld %ld", &x, &n);
        long ans(1);
        for(long p = 1; p * p <= x; p++){
            if(x % p){continue;}
            long q = (x / p);
            if(q >= n){ans = (ans > p) ? ans : p;}
            if(p >= n){ans = (ans > q) ? ans : q;}
        }

        printf("%ld\n", ans);
    }

}
