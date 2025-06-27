#include <cstdio>
#include <vector>
#include <algorithm>
typedef long long ll;

ll dfs(ll node, ll from, const std::vector<std::vector<ll> > &g, ll depth, std::vector<ll> &sv){
    const std::vector<ll> v = g[node];
    ll sz(1);
    for(ll p = 0; p < v.size(); p++){
        if(v[p] == from){continue;}
        sz += dfs(v[p], node, g, depth + 1, sv);
    }

    sv[node] = sz - depth;
    return sz;
}


int main(){

    ll n, k; scanf("%lld %lld", &n, &k);
    std::vector<std::vector<ll> > g(n + 1);
    for(ll p = 1; p < n; p++){
        ll x, y; scanf("%lld %lld", &x, &y);
        g[x].push_back(y); g[y].push_back(x);
    }

    std::vector<ll> hv(n + 1, 0);
    dfs(1, 0, g, 1, hv);
    sort(hv.begin() + 1, hv.end());
    
    ll total(0);
    for(ll p = k + 1; p <= n; p++){total += hv[p];}
    printf("%lld\n", total);

    return 0;
}
