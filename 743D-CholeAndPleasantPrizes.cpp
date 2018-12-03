#include <cstdio>
#include <vector>
#include <set>
#include <algorithm>
typedef long long ll;

void dfs(ll node, const std::vector<std::set<ll> > &g, const std::vector<ll> &val, std::vector<bool> &vis, std::vector<ll> &sums, std::vector<ll> &maxs){

    if(vis[node]){return;}
    vis[node] = true;

    std::set<ll> cr = g[node];
    sums[node] = val[node];
    for(std::set<ll>::iterator it = cr.begin(); it != cr.end(); it++){
        ll u = *it;
        if(vis[u]){continue;}
        dfs(u, g, val, vis, sums, maxs);
        sums[node] += sums[u];
        maxs[node] = (maxs[node] > maxs[u]) ? maxs[node] : maxs[u];
    }

    maxs[node] = (maxs[node] > sums[node]) ? maxs[node] : sums[node];
}

int main(){

    ll n; scanf("%lld", &n);
    std::vector<ll> a(n + 1); for(ll p = 1; p <= n; p++){scanf("%lld", &a[p]);}
    std::vector<std::set<ll> > g(n + 1);
    for(ll p = 1; p < n; p++){
        ll x, y; scanf("%lld %lld", &x, &y);
        g[x].insert(y); g[y].insert(x);
    }

    ll root(1);
    bool possible(true);
    while(g[root].size() == 1){
        ll node = *(g[root].begin());
        g[root].erase(node); g[node].erase(root);
        root = node;
    }


    if(g[root].size() == 0){puts("Impossible"); return 0;}
    std::vector<bool> visited(n + 1, 0); visited[root] = 1;
    std::vector<ll> sums(n + 1, 0), maxs(n + 1, -2e9);
    std::vector<ll> fv;
    std::set<ll> grabs = g[root];
    for(std::set<ll>::iterator it = grabs.begin(); it != grabs.end(); it++){
        ll child = *it;
        dfs(child, g, a, visited, sums, maxs);
        fv.push_back(maxs[child]);
    }

    sort(fv.rbegin(), fv.rend());
    printf("%lld\n", fv[0] + fv[1]);

    return 0;
}
