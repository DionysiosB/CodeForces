#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n, m, k; scanf("%lld %lld %lld", &n, &m, &k);
    if(n <= k){printf("%lld\n", n); return 0;}
    std::vector<ll> b(n); for(ll p = 0; p < n; p++){scanf("%lld", &b[p]);}
    std::vector<ll> d(n - 1); for(ll p = 0; p < n - 1; p++){d[p] = b[p + 1] - b[p] - 1;}
    sort(d.begin(), d.end());
    ll dist(n);
    for(ll p = 0; p < n - k; p++){dist += d[p];}
    printf("%lld\n", dist);

    return 0;
}
