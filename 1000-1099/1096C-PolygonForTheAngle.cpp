#include <cstdio>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);}

int main() {

    long t; scanf("%ld", &t);
    while(t--) {
        long ang; scanf("%ld", &ang);
        long g = gcd(ang, 180);
        long k = ang / g;
        long n = 180 / g;

        if(k + 1 == n){n *= 2;}
        printf("%ld\n", n);
    }

    return 0;
}
