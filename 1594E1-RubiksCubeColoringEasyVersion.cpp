#include <cstdio>
typedef long long ll;


ll fastpow(ll a, ll x, ll mod){
    if(a <= 1){return a % mod;}
    if(x <= 0){return 1;}

    ll tmp = fastpow(a, x / 2, mod);
    ll ans = ((tmp * tmp) % mod) * (x % 2 ? a : 1) % mod;
    return ans % mod;
}



int main(){

    const ll MOD = 1e9 + 7;

    ll k; scanf("%lld", &k);
    ll exptwo = (1LL << k) - 2;
    ll ans = 6 * fastpow(4, exptwo, MOD) % MOD;
    printf("%lld\n", ans);

    return 0;
}
