#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long odds(0), evens(0), minpow(1000);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(x % 2){++odds;}
            else{
                ++evens;
                long two(0); while(x % 2 == 0){x /= 2; ++two;}
                minpow = (minpow < two) ? minpow : two;
            }
        }


        long res = evens + (odds == 0) * (minpow - 1);
        printf("%ld\n", res);
    }

}
