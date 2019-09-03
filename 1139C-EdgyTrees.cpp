#include <cstdio>
#include <vector>
typedef long long ll;

void dfs(ll node, const std::vector<std::vector<ll> > &g, std::vector<bool> &been, ll &count){
    if(been[node]){return;}
    been[node] = true; ++count;
    for(ll p = 0; p < g[node].size(); p++){
        ll x = g[node][p];
        if(been[x]){continue;}
        dfs(x, g, been, count);
    }
}

int main(){

    const ll MOD = 1e9 + 7;
    ll n, k; scanf("%lld %lld", &n, &k);
    std::vector<std::vector<ll> > g(n + 1);
    for(ll p = 1; p < n; p++){
        ll x, y, z; scanf("%lld %lld %lld", &x, &y, &z);
        if(z){continue;}
        g[x].push_back(y); g[y].push_back(x);
    }

    std::vector<ll> h;
    std::vector<bool> vis(n + 1, 0);
    for(ll p = 1; p <= n; p++){
        if(vis[p]){continue;}
        ll cnt(0);
        dfs(p, g, vis, cnt);
        h.push_back(cnt);
    }

    ll total(1); for(ll p = 0; p < k; p++){total *= n; total %= MOD;}
    for(ll p = 0; p < h.size(); p++){
        ll a = h[p]; for(ll u = 1; u < k; u++){h[p] *= a; h[p] %= MOD;}
        total -= h[p]; total = ((total % MOD) + MOD) % MOD;
    }

    printf("%lld\n", total);

    return 0;
}
