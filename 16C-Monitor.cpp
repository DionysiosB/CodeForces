#include <cstdio>

long gcd(long x, long y){return (x == 0) ? y : gcd(y % x, x);} 

int main(){

    long a, b, x, y; scanf("%ld %ld %ld %ld", &a, &b, &x, &y);
    long g = gcd(x, y);
    x /= g; y /= g;
    long u(a / x), v(b / y);
    long factor = (u < v) ? u : v;
    printf("%ld %ld\n", factor * x, factor * y);

    return 0;
}
