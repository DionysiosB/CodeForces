#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<std::pair<ll, ll> > v(n);
        for(ll p = 0; p < n; p++){scanf("%lld", &v[p].first); v[p].second = p + 1;}
        sort(v.rbegin(), v.rend());
        ll total(0);
        std::vector<ll> res(n + 1, 0);
        for(ll p = 0; p < n; p++){
            ll num = v[p].first;
            ll idx = v[p].second;
            ll dist = p / 2 + 1;
            total += 2 * num * dist;
            ll pos = p % 2 ? dist : -dist;
            res[idx] = pos;
        }

        printf("%lld\n", total);
        for(ll p = 0; p <= n; p++){printf("%lld ", res[p]);}
        puts("");
    }

}
