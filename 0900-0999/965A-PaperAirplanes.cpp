#include <cstdio>

int main(){

    long k, n, s, p; scanf("%ld %ld %ld %ld", &k, &n, &s, &p);
    long sheets = k * ((n + s - 1) / s);
    long packs = (sheets + p - 1) / p;
    printf("%ld\n", packs);

    return 0;
}
