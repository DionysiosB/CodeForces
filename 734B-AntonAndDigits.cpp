#include <cstdio>

int main(){

    long k2, k3, k5, k6; scanf("%ld %ld %ld %ld", &k2, &k3, &k5, &k6);

    long long a = (k5 < k6) ? k5 : k6;
    a = (a < k2) ? a : k2;

    long long b = k2 - a;
    b = (b < k3) ? b : k3;

    long long ans = 256 * a + 32 * b;
    printf("%lld\n", ans);

    return 0;
}
