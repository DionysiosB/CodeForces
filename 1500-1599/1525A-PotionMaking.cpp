#include <cstdio>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long k; scanf("%ld", &k);
        long g = gcd(k, 100 - k);
        long ans = k / g + (100 - k) / g;
        printf("%ld\n", ans);
    }

}
