#include <cstdio>

int main(){

    long n, k; scanf("%ld %ld\n", &n, &k);
    printf("%ld\n", k * (6 * n - 1));
    for(long p = 0; p < n; p++){printf("%ld %ld %ld %ld\n", k *(6 * p + 1), k *(6 * p + 2), k * (6 * p + 3), k * (6 * p + 5));}

    return 0;
}
