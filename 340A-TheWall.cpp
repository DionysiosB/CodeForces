#include <cstdio>

int gcd (int a, int b){return (b == 0) ? a : gcd (b, a%b);}

int main(){

    int x(0), y(0); long a(0), b(0);
    scanf("%d %d %ld %ld\n", &x, &y, &a, &b);
    long lcp = x * y / gcd(x, y);
    long output = b/lcp - (a - 1)/ lcp;
    printf("%ld\n", output);
    return 0;
}
