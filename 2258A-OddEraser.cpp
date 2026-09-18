#include <cstdio>

long gcd(long a, long b){return a ? gcd(b % a, a) : b;}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long first(0), last(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(!p){first = x;}
            else if(p == n - 1){last = x;}
        }

        printf("%ld\n", gcd(first, last));
    }

}
