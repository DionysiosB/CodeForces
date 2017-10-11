#include <cstdio>

int main(){

    long n, k; scanf("%ld %ld\n", &n, &k);
    printf("%ld\n", (1 + n/k) * k);

    return 0;
}
