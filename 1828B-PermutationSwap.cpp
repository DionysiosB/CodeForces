#include <cstdio>

long gcd(long a, long b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long g(0);
        for(long p = 1; p <= n; p++){
            long x; scanf("%ld", &x);
            long diff = p - x;
            diff = (diff > 0) ? diff : -diff;
            g = gcd(g, diff);
        }

        printf("%ld\n", g);

    }

}
