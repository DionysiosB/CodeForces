#include <cstdio>
typedef long long ll;

int main(){

    const ll MOD = 998244353;
    ll n, k; scanf("%lld %lld", &n, &k);
    ll mx = k * n - k * (k - 1) / 2;
    ll prod(1); ll prev(-1);
    for(long p = 0; p < n; p++){
        ll x; scanf("%lld", &x);
        if(x + k <= n){continue;}
        prev = (prev >= 0) ? prev : (p - 1);
        prod *= (p - prev); prod %= MOD;
        prev = p;
    }

    printf("%lld %lld\n", mx, prod);

    return 0;
}
