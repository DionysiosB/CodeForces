#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long prev; scanf("%ld", &prev);
        long mx(1e9 + 7);
        for(long p = 1; p < n; p++){
            long x; scanf("%ld", &x);
            long cur = (x > prev ? x : prev);
            mx = (mx < cur ? mx : cur);
            prev = x;
        }

        printf("%ld\n", mx - 1);
    }

}
