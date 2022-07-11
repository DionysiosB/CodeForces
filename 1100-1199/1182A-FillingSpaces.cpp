#include <cstdio>

int main(){

    int n; scanf("%d", &n);
    long long ans = (n % 2) ? 0 : (1 << (n / 2));
    printf("%lld\n", ans);

    return 0;
}
