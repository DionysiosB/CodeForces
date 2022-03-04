#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        for(long p = 0; p < n; p++){
            long x(n);
            for(long u = 0; u < n; u++){printf("%ld ", (u == p) ? 1 :  x--);}
            puts("");
        }
    }

}
