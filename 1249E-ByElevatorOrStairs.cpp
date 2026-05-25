#include <cstdio>
#include <vector>
typedef long long ll;

int main(){

    ll n, c; scanf("%lld %lld", &n, &c);
    std::vector<ll> a(n); for(ll p = 1; p < n; p++){scanf("%lld", &a[p]);}
    std::vector<ll> b(n); for(ll p = 1; p < n; p++){scanf("%lld", &b[p]);}
    std::vector<ll> f(n, 0), g(n, c);
    for(ll p = 1; p < n; p++){
        f[p] = (f[p - 1] < g[p - 1] ? f[p - 1] : g[p - 1]) + a[p];
        g[p] = ((c + f[p - 1]) < g[p - 1] ? (c + f[p - 1]) : g[p - 1]) + b[p];
    }

    for(ll p = n - 2; p > 0; p--){
        ll x = (f[p + 1] < g[p + 1] ? f[p + 1] : g[p + 1]) + a[p + 1];
        ll y = ((c + f[p + 1]) < g[p + 1] ? (c + f[p + 1]) : g[p + 1]) + b[p + 1];
        f[p] = (f[p] < x) ? f[p] : x;
        g[p] = (g[p] < x) ? g[p] : x;
    }

    for(ll p = 0; p < n; p++){printf("%lld ", (f[p] < g[p]) ? f[p] : g[p]);}
    puts("");

    return 0;
}
