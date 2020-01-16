#include <cstdio>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        puts(gcd(a, b) <= 1 ? "Finite" : "Infinite");
    }

    return 0;
}
