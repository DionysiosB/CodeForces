#include <cstdio>
#include <map>
#include <cmath>
typedef long long ll;

const ll MOD = 1000000007;

ll fexp(ll b, ll x) {

    ll res = 1;
    while(x) {
        if(x & 1){res = (b * res) % MOD;}
        b = (b * b) % MOD;
        x /= 2;
    }

    res %= MOD;

    return res;
}


int main() { 

    ll n; scanf("%lld", &n);
    std::map<ll, ll> m;
    for(ll p = 0; p < n; p++){ll x; scanf("%lld", &x); m[x]++;}

    ll ans(1), d(1);
    for(std::map<ll,ll>::iterator it = m.begin(); it != m.end(); it++){
        ll p = it->first, k = it->second;
        ll f = fexp(p, k * (k+1) / 2);
        ans = fexp(ans, k + 1) * fexp(f, d) % MOD;
        d = (d * (k + 1)) % (MOD - 1);
    }

    printf("%lld\n", ans);

    return 0;
}
