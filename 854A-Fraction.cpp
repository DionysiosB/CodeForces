#include <cstdio>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    long n; scanf("%ld", &n);
    long a(0);
    for(long p = 1; p < (n - p); p++){if(gcd(p, n - p) == 1){a = p;}}
    printf("%ld %ld\n", a, n - a);

    return 0;
}
