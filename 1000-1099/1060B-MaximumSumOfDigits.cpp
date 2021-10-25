#include <cstdio>

int main(){

    long long n, m, a(1), b; scanf("%lld", &n);
    m = n; while(a <= m){a *= 10;}; a /= 10; a -= 1; b = n - a;
    long s(0);
    while(a > 0){s += (a % 10); a /= 10;}
    while(b > 0){s += (b % 10); b /= 10;}
    printf("%ld\n", s);

    return 0;
}
