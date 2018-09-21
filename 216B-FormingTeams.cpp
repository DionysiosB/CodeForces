#include <cstdio>
#include <vector>

void dfs(long node, const std::vector<std::vector<long> > &g, std::vector<bool> &vis, std::vector<long> &cycle){

    if(vis[node]){return;}
    vis[node] = 1;
    cycle.push_back(node);
    for(long p = 0; p < g[node].size(); p++){if(!vis[g[node][p]]){dfs(g[node][p], g, vis, cycle);}}
    return;
}


int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::vector<long> > g(n);
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        --x; --y;
        g[x].push_back(y); g[y].push_back(x);
    }

    std::vector<bool> mark(n, 0);
    long count(0);
    for(long p = 0; p < n; p++){
        std::vector<long> cycle;
        dfs(p, g, mark, cycle);
        if((cycle.size() & 1) && g[cycle.back()].size() == 2){++count;}
    }

    if((n - count) & 1){++count;}
    printf("%ld\n", count);

    return 0;
}
