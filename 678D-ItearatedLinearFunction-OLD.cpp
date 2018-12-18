#include <cstdio>
typedef long long ll;

ll modPower(ll b, ll x, ll M){
    if(b <= 0){return 0;}
    else if(b == 1 || x == 0){return 1;}
    ll h = modPower(b, x / 2, M) % M;
    ll res = ((h * h) % M)  *  (((x % 2) ? b : 1) % M) % M;
    return res;
}

ll modInv(ll a, ll M){
    a %= M;
    if(a <= 0){return 0;}
    else if(a == 1){return 1;}
    return (2 * M - (M / a) * modInv(M % a, M) % M) % M;
}

int main(){

    const ll MOD = 1e9 + 7;
    ll a, b, n, x; scanf("%lld %lld %lld %lld", &a, &b, &n, &x);
    ll res(0);
    if(a == 1){res = (x + n * b % MOD) % MOD;}
    else{
        ll arn = modPower(a, n, MOD) % MOD;
        res = arn + (b % MOD) * (modInv(a - 1, MOD) * (MOD + arn - 1) % MOD) % MOD;
        res = (MOD + res) % MOD;
    }

    printf("%lld\n", res);

    return 0;
}
