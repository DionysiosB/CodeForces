#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long odds(0), evens(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            x %= 2;
            odds += x;
            evens += (1 - x);
        }

        printf("%ld\n", odds + (evens ? 1 : -1));
    }

}
