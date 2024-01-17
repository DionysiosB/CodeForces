#include <cstdio>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long g = gcd(a, b);
        printf("%ld\n", ((b % a ? a : b) / g) * b);
    }

}
