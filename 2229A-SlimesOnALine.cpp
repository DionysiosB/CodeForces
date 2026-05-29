#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mnv(1007), mxv(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            mnv = (x < mnv ? x : mnv);
            mxv = (x > mxv ? x : mxv);
        }

        printf("%ld\n", (mxv - mnv + 1) / 2);
    }

}
