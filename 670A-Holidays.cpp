#include <cstdio>

int main(){

    long n; scanf("%ld\n", &n);
    long m = 2 * (n / 7) + (n % 7 == 6);
    long M = 2 * (n / 7) + (n % 7 > 0) + (n % 7 > 1);
    printf("%ld %ld\n", m, M);

    return 0;
}
