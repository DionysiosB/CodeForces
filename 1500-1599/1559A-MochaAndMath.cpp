#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long res; scanf("%ld", &res);
        for(long p = 1; p < n; p++){
            long x; scanf("%ld", &x);
            res &= x;
        }

        printf("%ld\n", res);
    }

}
