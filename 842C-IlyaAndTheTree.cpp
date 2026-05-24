#include <cstdio>
#include <vector>
#include <set>

long gcd (long a, long b){return (b == 0) ? a : gcd (b, a%b);} 

void dfs(long node, const std::vector<std::vector<long> > &g, const std::vector<long> &a, std::vector<bool> &vis, std::vector<long> &pathgcd, std::vector<std::set<long> > &gs, std::vector<long> &maxgcd){

    if(vis[node]){return;}
    vis[node] = true;
    
    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(vis[u]){continue;}
        pathgcd[u] = gcd(pathgcd[node], a[u]);
        gs[u].insert(pathgcd[node]); gs[u].insert(pathgcd[u]);
        if(gs[node].size() == 0){gs[u].insert(a[u]);}
        else{for(std::set<long>::iterator it = gs[node].begin(); it != gs[node].end(); it++){gs[u].insert(gcd(*it, a[u]));}}
        //printf("Node: %ld  -> ", u); for(std::set<long>::iterator it = s.begin(); it != s.end(); it++){printf("%ld ", *it);}; puts("");
        maxgcd[u] = *(--gs[u].end());
        dfs(u, g, a, vis, pathgcd, gs, maxgcd);
    }

    return;
}


int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<std::vector<long> > g(n);
    for(long p = 1; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        --x; --y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    std::vector<long> maxgcd(n, 0); maxgcd[0] = a[0];
    std::vector<long> pathgcd(n, 0); pathgcd[0] = a[0];
    std::vector<bool> been(n, 0);
    std::vector<std::set<long> > gcdSets(n);
    const long root(0);
    dfs(root, g, a, been, pathgcd, gcdSets, maxgcd);
    for(long p = 0; p < n; p++){printf("%ld ", maxgcd[p]);}
    puts("");

    return 0;
}
