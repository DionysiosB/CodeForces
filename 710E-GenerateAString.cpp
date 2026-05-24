#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n, x, y; scanf("%lld %lld %lld", &n, &x, &y);
    std::vector<ll> f(n + 1, 0);
    for(long p = 1; p <= n; p++){
        ll a = f[p - 1] + x;
        ll b = f[(p + 1) / 2] + y + x * (p & 1);
        f[p] = (a < b) ? a : b;
    }

    printf("%lld\n", f[n]);

    return 0;
}
