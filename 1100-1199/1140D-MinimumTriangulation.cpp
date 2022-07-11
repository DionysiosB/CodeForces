#include <cstdio>

int main(){

    long long n; scanf("%lld", &n);
    printf("%lld\n", -2 + (n - 1) * n * (n + 1) / 3);

    return 0;
}
