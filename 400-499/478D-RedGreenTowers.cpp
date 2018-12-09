#include <cstdio>
typedef long long ll;

int main(){

    const ll MOD = 1e9 + 7;
    const ll MAX = 4e5 + 7;

    ll r, g; scanf("%lld %lld", &r, &g);
    ll n(0); while(n * (n + 1) / 2 <= (r+g)){++n;}; --n;
    
    ll f[MAX] = {0}; f[0] = 1;
    for(ll p = 1; p <= n; p++){for(ll q = r; q >= 0; q--){f[p + q] = (f[p + q] + f[q]) % MOD;}}

    ll ans(0);
    ll x = n * (n + 1) / 2 - g; if(x < 0){x = 0;}
    for(ll p = x; p <= r; p++){ans = (ans + f[p]) % MOD;}
    printf("%lld\n", ans);
        
    return 0;
}
