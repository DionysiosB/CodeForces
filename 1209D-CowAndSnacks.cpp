#include <cstdio>
#include <vector>


void dfs(const std::vector<std::vector<long> > &g, long node, std::vector<bool> &been){
    if(been[node]){return;}
    been[node] = 1;
    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(been[u]){continue;}
        dfs(g, u, been);
    }

    return;
}

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<std::vector<long> > g(n + 1);
    for(long p = 0; p < k; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        g[x].push_back(y); g[y].push_back(x);
    }

    long cnt(0);
    std::vector<bool> vis(n + 1, 0);
    for(long p = 1; p <= n; p++){
        if(vis[p]){continue;}
        ++cnt;
        dfs(g, p, vis);
    }

    printf("%ld\n", k - n + cnt);

    return 0;
}
