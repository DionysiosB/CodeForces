#include <cstdio>

int main(){

    const long long M = 1000000007;

    long long n; scanf("%lld\n", &n);

    long long unconstrained = 1;
    for(long long p = 0; p < 3 * n; p++){unconstrained *= 3; unconstrained %= M;}

    long long impossible = 1;
    for(long long p = 0; p < n; p++){impossible *= 7; impossible %= M;}

    long long output = (M + unconstrained - impossible) % M;
    printf("%lld\n", output);

    return 0;
}
