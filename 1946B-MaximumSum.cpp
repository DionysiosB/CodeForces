#include <cstdio>
#include <vector>
typedef long long ll;

int main(){
    const ll MOD = 1e9 + 7;

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, k; scanf("%lld %lld", &n, &k);

        ll cur(0), mx(0), total(0);
        for(long p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            total += x;
            cur += x; if(cur < 0){cur = 0;}
            mx = (mx > cur ? mx : cur);
        }

        total -= mx; total = (total % MOD + MOD) % MOD;
        while(k--){mx *= 2; mx %= MOD;}
        printf("%lld\n", (total + mx + MOD) % MOD);
    }

}
