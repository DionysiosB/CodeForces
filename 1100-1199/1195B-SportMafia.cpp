#include <cstdio>
#include <cmath>
typedef long long ll;

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    ll x = (-3 + sqrt(9 + 8 * (n + k)))/ 2;
    printf("%lld\n", n - x);

    return 0;
}
