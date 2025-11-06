#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long mn(1e9 + 7), mx(-1e9 - 7);
        for(long p = 0; p < n; p++){
            long a; scanf("%ld", &a);
            mn = (mn < a ? mn : a);
            mx = (mx > a ? mx : a);
        }

        long x; scanf("%ld", &x);
        puts(mn <= x && x <= mx ? "YES" : "NO");
    }

}
