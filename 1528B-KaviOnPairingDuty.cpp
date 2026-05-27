#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    const ll MOD = 998244353;
    ll n; scanf("%lld", &n);

    std::vector<ll> f(n + 1);
    f[0] = 1;
    for(ll p = 1; p <= n; p++){
        for(ll q = 2 * p; q <= n; q += p){++f[q];}
    }

    ll sum(1);
    for(ll p = 1; p <= n; p++){
        f[p] = (f[p] + sum) % MOD;
        sum = (sum + f[p]) % MOD;
    }

    printf("%lld\n", f.back());

    return 0;
}
