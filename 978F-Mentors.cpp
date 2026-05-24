#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    std::vector<std::pair<ll, ll> > r(n);
    for(ll p = 0; p < n; p++){scanf("%lld", &r[p].first); r[p].second = p;}

    std::vector<ll> t(n, 0);
    for(long p = 0; p < k; p++){
        ll x, y; scanf("%lld %lld", &x, &y);
        --x; --y;
        if(r[x].first < r[y].first){--t[y];}
        else if(r[y].first < r[x].first){--t[x];}
    }

    sort(r.begin(), r.end());

    ll prev(0);
    for(ll p = 1; p < n; p++){
        if(r[p].first > r[p - 1].first){prev = p;}
        ll w = r[p].second;
        t[w] += prev;
    }

    for(ll p = 0; p < n; p++){printf("%lld ", t[p]);}; puts("");

    return 0;
}
