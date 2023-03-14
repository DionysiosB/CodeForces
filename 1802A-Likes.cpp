#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long pos(0), neg(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            pos += (x > 0);
            neg += (x < 0);
        }

        for(long p = 1; p <= n; p++){printf("%ld ", p <= pos ? p : (2 * pos - p));}
        puts("");
        for(long p = 1; p <= n; p++){printf("%ld ", (p <= 2 * neg) ? (p % 2) : (p - 2 * neg));}
        puts("");
    }

}
