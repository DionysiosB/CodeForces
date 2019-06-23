#include <cstdio>
#include <vector>
#include<algorithm>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    std::vector<std::pair<ll, ll>> a;
    for(ll p = 0; p < n; p++){
        ll l, r; scanf("%lld %lld", &l, &r);
        a.push_back(std::make_pair(l, 1)); a.push_back(std::make_pair(r + 1, -1));
    }

    sort(a.begin(), a.end());

    std::vector<ll> b(n + 1, 0);

    ll active(0);
    for(ll p = 0; p < a.size() - 1; p++){
        active += a[p].second;
        b[active] += a[p + 1].first - a[p].first;
    }

    for(ll p = 1; p <= n; p++){printf("%lld ", b[p]);}; puts("");

    return 0;
}
