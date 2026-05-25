#include <cstdio>
typedef long long ll;

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    ll total(0);
    total += (2 * n + k - 1) / k;
    total += (5 * n + k - 1) / k;
    total += (8 * n + k - 1) / k;
    printf("%lld\n", total);

    return 0;
}
