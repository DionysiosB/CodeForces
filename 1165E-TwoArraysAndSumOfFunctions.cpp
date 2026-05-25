#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    const ll MOD = 998244353;

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n); for(ll p = 0; p < n; p++){scanf("%lld", &a[p]); a[p] *= (p + 1) * (n - p);}
    std::vector<ll> b(n); for(ll p = 0; p < n; p++){scanf("%lld", &b[p]);}
    sort(a.begin(), a.end()); sort(b.rbegin(), b.rend());
    ll sum(0); for(ll p = 0; p < n; p++){sum += (a[p] % MOD) * (b[p] % MOD); sum %= MOD;}
    printf("%lld\n", sum);

    return 0;
}
