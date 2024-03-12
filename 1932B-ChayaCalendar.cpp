#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long ans(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            ans = ((ans / x) + 1) * x;
        }

        printf("%ld\n", ans);
    }

}
