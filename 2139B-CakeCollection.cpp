#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, m; scanf("%lld %lld", &n, &m);
        std::vector<ll> v(n);
        for(ll p = 0; p < n; p++){scanf("%lld", &v[p]);}
        sort(v.rbegin(), v.rend());
        ll total(0);
        for(ll p = 0; p < n && p < m; p++){total += (m - p) * v[p];}
        printf("%lld\n", total);
    }

}
