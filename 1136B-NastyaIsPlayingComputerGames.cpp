#include <cstdio>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    long x = (2 * k <= n + 1) ? (k - 1) : (n - k);
    long ans = 3 * n + x;
    printf("%ld\n", ans);

    return 0;
}
