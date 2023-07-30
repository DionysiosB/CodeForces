#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long cnt(0);
        for(long p = 1; p <= n; p++){
            long x; scanf("%ld", &x);
            cnt += (x == p);
        }

        printf("%ld\n", (cnt + 1) / 2);
    }

}
