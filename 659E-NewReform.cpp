#include <cstdio>
#include <vector>

void dfs(const std::vector<std::vector<long> > &g, long node, std::vector<bool> &visited, long &order, long &size){
    if(visited[node]){return;}
    visited[node] = true;
    ++order; size += g[node].size();
    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(visited[u]){continue;}
        dfs(g, u, visited, order, size);
    }

    return;
}


int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::vector<long> > g(n + 1);
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        g[x].push_back(y); g[y].push_back(x);
    }

    long count(0);
    std::vector<bool> been(n + 1, 0);
    for(long p = 1; p <= n; p++){
        if(been[p]){continue;}
        long v(0), e(0);
        dfs(g, p, been, v, e);
        count += (v > e / 2);
    }

    printf("%ld\n", count);

    return 0;
}
