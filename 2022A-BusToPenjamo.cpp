#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, r; scanf("%ld %ld", &n, &r);
        long cnt(0), rem(0);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            cnt += 2 * (a / 2);
            r -= a / 2;
            rem += (a % 2);
        }

        cnt += (rem <= r ? rem : (2 * r - rem));
        printf("%ld\n", cnt);
    }

}
