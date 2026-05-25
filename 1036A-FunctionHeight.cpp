#include <cstdio>
typedef long long ll;

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    printf("%lld\n", (k + n - 1) / n);

    return 0;
}
