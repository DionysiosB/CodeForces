#include <cstdio>

int main(){

    long long k, n, w; scanf("%lld %lld %lld\n", &k, &n, &w);
    long long cost = k * w * (w + 1) / 2;
    long long borrowed = (cost > n) ? (cost - n) : 0;
    printf("%lld\n", borrowed); 

    return 0;
}
