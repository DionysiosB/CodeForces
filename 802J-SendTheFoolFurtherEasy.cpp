#include <cstdio>
#include <vector>

void dfs(int node, const std::vector<std::vector<long> > &g, std::vector<bool> &visited, long current, long &maxCost){

    if(visited[node]){return;}
    visited[node] = 1;
    maxCost = (current > maxCost) ? current : maxCost;

    for(int u = 0; u < g[node].size(); u++){
        if(g[node][u] == 0){continue;}
        if(visited[u]){continue;}
        dfs(u, g, visited, current + g[node][u], maxCost);
    }

    return;
}


int main(){

    int n; scanf("%d", &n);
    std::vector<std::vector<long> > g(n, std::vector<long>(n, 0));
    for(long p = 1; p < n; p++){
        int x, y; long c; scanf("%d %d %ld", &x, &y, &c);
        g[x][y] = g[y][x] = c;
    }

    long maxCost(0);
    std::vector<bool> visited(n, 0);
    dfs(0, g, visited, 0, maxCost);
    printf("%ld\n", maxCost);

    return 0;
}
