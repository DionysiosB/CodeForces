#include <cstdio>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    long diameter = 2 * ((n - 1) / k) + ((((n - 1) % k) < 2) ? ((n - 1) % k) : 2);
    printf("%ld\n", diameter);
    for(long p = 2; p <= n; p++){printf("%ld %ld\n", (((p - k) > 1) ? (p - k) : 1)  , p);}

    return 0;
}
