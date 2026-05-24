#include <cstdio>
#include <vector>

void dfs(long node, const std::vector<std::vector<long> > &g, std::vector<bool> &been, bool &circle){

    if(been[node]){return;}
    been[node] = true;
    if(g[node].size() != 2){circle = false;}

    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(been[u]){continue;}
        dfs(u, g, been, circle);
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

    std::vector<bool> visited(n + 1, 0);
    long cnt(0);
    for(long p = 1; p <= n; p++){
        if(visited[p]){continue;}
        bool isCycle(true);
        dfs(p, g, visited, isCycle);
        cnt += isCycle;
    }

    printf("%ld\n", cnt);

    return 0;
}
