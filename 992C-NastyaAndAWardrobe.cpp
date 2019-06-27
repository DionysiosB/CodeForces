#include <cstdio>
typedef long long ll;

ll pow(ll b, ll x, ll m){
    if(x <= 0){return 1;}
    ll prev = pow(b, x / 2, m);
    ll res = (prev * prev) % m; 
    if(x % 2){res *= b; res %= m;}
    return res;
}


int main(){

    const ll MOD = 1e9 + 7;
    ll x, k; scanf("%lld %lld", &x, &k);
    ll ans = pow(2, k + 1, MOD) * (x % MOD)  - pow(2, k, MOD) + 1;
    ans = (ans + MOD) % MOD;
    printf("%lld\n", (x > 0) ? ans : 0);

    return 0;
}
