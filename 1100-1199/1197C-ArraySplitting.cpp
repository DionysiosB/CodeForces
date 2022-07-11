#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]);}
    std::vector<ll> b(n - 1); for(ll p = 1; p < n; p++){b[p - 1] = a[p] - a[p - 1];}
    sort(b.rbegin(), b.rend());
    ll res = a.back() - a[0];
    for(long p = 0; p < k - 1; p++){res -= b[p];}
    printf("%lld\n", res);

    return 0;
}
