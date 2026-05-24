#include <cstdio>
typedef long long ll;

ll qexp(ll base, ll x, ll MOD){

    if(x == 0){return 1;}
    base %= MOD;
    ll r = qexp(base, x / 2, MOD);
    ll res = (((r * r) % MOD) * ((x & 1) ? (base % MOD) : 1)) % MOD;
    return res;
}

int main(){

    const ll MOD = 1000000007;
    ll n, m, k; scanf("%lld %lld %lld", &n, &m, &k);

    if((k < 0) && ((n & 1) ^ (m & 1))){puts("0");}
    else{
        ll res = qexp( qexp(2, m - 1, MOD) , n - 1, MOD);
        res %= MOD;
        printf("%lld\n", res);
    }

    return 0;
}
