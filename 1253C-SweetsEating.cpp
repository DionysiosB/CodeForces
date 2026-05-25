#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n, m; scanf("%lld %lld", &n, &m);
    std::vector<ll> a(n); for(ll p = 0; p <= n; p++){scanf("%lld", &a[p]);}
    sort(a.begin(), a.end());

    ll cs(0); std::vector<ll> v(n);
    for(long p = 0; p < n; p++){
        cs += a[p];
        v[p] = cs + ((p >= m) ? v[p - m] : 0);
        printf("%lld ", v[p]);
    }
    puts("");

}
