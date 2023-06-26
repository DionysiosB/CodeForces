#include <cstdio>
#include <vector>
typedef long long ll;

void dfs(ll cur, ll from, const std::vector<std::vector<ll> > &g, std::vector<ll> &desc){

    const std::vector<ll> neighbors = g[cur];
    if(cur > 1 && neighbors.size() == 1){desc[cur] = 1; return;}

    for(ll p = 0; p < neighbors.size(); p++){
        ll x = neighbors[p];
        if(x == from){continue;}
        dfs(x, cur, g, desc);
        desc[cur] += desc[x];
    }

    return;
}

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        std::vector<std::vector<ll> > g(n + 1, std::vector<ll>());
        for(ll p = 1; p < n; p++){
            ll x, y; scanf("%lld %lld", &x, &y);
            g[x].push_back(y); g[y].push_back(x);
        }

        std::vector<ll> d(n + 1, 0);
        dfs(1, 1, g, d);

        ll q; scanf("%lld", &q);
        while(q--){
            ll x, y; scanf("%lld %lld", &x, &y);
            printf("%lld\n", d[x] * d[y]);
        }
    }

}
