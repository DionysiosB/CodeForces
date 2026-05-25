#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long prev; scanf("%ld", &prev);
        long cnt(0);
        for(long p = 1; p < n; p++){
            long x; scanf("%ld", &x);
            long a = (x < prev) ? x : prev;
            long b = (x > prev) ? x : prev;
            while(2 * a < b){a *= 2; ++cnt;}
            prev = x;
        }

        printf("%ld\n", cnt);
    }

}
