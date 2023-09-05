#include <cstdio>
typedef long long ll;

int main(){

    const ll MOD = 1e9 + 7;
    ll n; scanf("%lld", &n);
    ll f(1); for(ll p = 1; p <= n; p++){f *= p; f %= MOD;}
    ll w(1); for(ll p = 1; p < n; p++){w *= 2; w %= MOD;}
    ll res = (3 * MOD + f - w) % MOD;
    printf("%lld\n", res);

    return 0;
}
