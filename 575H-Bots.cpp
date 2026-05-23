#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    const ll MOD = 1e9 + 7;

    ll n; scanf("%lld", &n);
    std::vector<ll> fact(2 * n + 1, 1);
    for(ll p = 2; p <= 2 * n; p++){fact[p] = p * fact[p - 1] % MOD;}

    std::vector<ll> modInv(n + 2, 1);
    for(ll p = 2; p <= n + 1; p++){modInv[p] = (MOD - ((MOD / p) * modInv[MOD % p] % MOD)) % MOD;}

    ll cur(1), ans(0);
    for(ll k = 1; k <= n + 1; k++){
        cur *= ((n + k) * modInv[k] % MOD); cur %= MOD;
        ans += cur; ans %= MOD;
    }

    printf("%lld\n", ans);

    return 0;
}
