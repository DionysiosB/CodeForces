#include <cstdio>
typedef long long ll;

int main(){

    const ll MOD = 998244353;
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        if(n % 2){puts("0"); continue;}
        ll h = n / 2;
        ll res(1);
        for(ll p = 2; p <= h; p++){res *= p; res %= MOD;}
        printf("%lld\n", (res * res % MOD));
    }

}
