#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        bool state(true);
        long cnt(0);
        for(long p = 1; p <= n; p++){
            long x; scanf("%ld", &x);
            cnt += (state && p != x);
            state = (p == x);
        }

        printf("%ld\n", (cnt < 2) ? cnt : 2);
    }

    return 0;
}
