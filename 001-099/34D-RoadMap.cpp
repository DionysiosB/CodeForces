#include <cstdio>
#include <vector>

void dfs(long node, const std::vector<std::vector<long> > &g, std::vector<long> &from, std::vector<bool> &vis){

    if(vis[node]){return;}
    vis[node] = 1;

    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(vis[u]){continue;}
        from[u] = node;
        dfs(u, g, from, vis);
    }

    return;
}


int main(){

    long n, r1, r2; scanf("%ld %ld %ld\n", &n, &r1, &r2);
    std::vector<std::vector<long> > g(n + 1);
    for(long p = 1; p <= n; p++){
        if(p == r1){continue;}
        long x; scanf("%ld", &x);
        g[p].push_back(x); g[x].push_back(p);
    }

    std::vector<long> from(n + 1, 0);
    std::vector<bool> visited(n + 1, 0);
    dfs(r2, g, from, visited);

    for(long p = 1; p <= n; p++){
        if(p == r2){continue;}
        printf("%ld ", from[p]);
    }
    puts("");

    return 0;
}
