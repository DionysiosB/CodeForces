#include<cstdio>
typedef long long ll;

const ll MOD=1e9+7;

ll power(ll x,ll y){
    ll res(1);
    for(; y; y>>=1, x = ((x % MOD) * (x % MOD)) % MOD){
        if(y & 1){res *= (x % MOD); res %= MOD;}
    }
    return res;
}

int main(){

    ll x, n; scanf("%lld %lld", &x, &n);
    ll ans(1);

    for(ll p = 2; p * p <= x; p++){
        if(x % p){continue;}
        while(x % p == 0){x /= p;}

        for(ll q = p; q <= n; q *= p){
            ans *= (power(p, n / q) % MOD); ans %= MOD;
            if(1.0L * q * p > n){break;}
        }
    }

    ans %= MOD;

    if(x > 1){
        for(ll q = x; q <= n; q *= x){
            ans *= power(x, n / q) % MOD; ans %= MOD;
            if(1.0L * q * x > n){break;}
        }
    }

    printf("%lld\n", ans);

    return 0;
}
