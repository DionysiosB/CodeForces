#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    std::vector<ll> a(n), b(m), c(n, -2e18);
    for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    for(ll p = 0; p < m; p++){scanf("%lld", &b[p]);}
    for(ll p = 0; p < n; p++){for(ll q = 0; q < m; q++){c[p] = (c[p] > a[p] * b[q]) ? c[p] : (a[p] * b[q]);}}
    sort(c.begin(), c.end());
    printf("%lld\n", c[c.size() - 2]);

    return 0;
}
