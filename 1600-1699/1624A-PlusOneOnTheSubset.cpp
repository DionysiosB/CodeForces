#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mx(0), mn(1e9 + 7);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            mn = (mn < x) ? mn : x;
            mx = (mx > x) ? mx : x;
        }

        printf("%ld\n", mx - mn);
    }

}
