#include <cstdio>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    long m = (0 < k && k < n) ? 1 : 0;
    long M = (k <= n / 3) ? (2 * k) : (n - k);
    printf("%ld %ld\n", m, M);

    return 0;
}
