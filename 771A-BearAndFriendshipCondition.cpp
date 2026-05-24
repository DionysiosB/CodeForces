#include <cstdio>
#include <iostream>
#include <vector>

void dfs(int64_t node, const std::vector<std::vector<int64_t> > &g, std::vector<bool> &been, int64_t &numEdges, int64_t &numNodes){

    if(been[node]){return;}
    been[node] = 1; ++numNodes;
    std::vector<int64_t> adj = g[node];
    for(int64_t p = 0; p < adj.size(); p++){
        ++numEdges;
        dfs(adj[p], g, been, numEdges, numNodes);
    }

    return;
}


int main(){

    int64_t n, m; scanf("%lld %lld", &n, &m);
    std::vector<std::vector<int64_t> > g(n + 1);
    for(int64_t p = 0; p < m; p++){
        int64_t x, y; scanf("%lld %lld", &x, &y);
        g[x].push_back(y); g[y].push_back(x);
    }

    std::vector<bool> visited(n + 1, 0);
    bool reasonable(true);
    for(int p = 1; p <= n; p++){
        if(visited[p]){continue;}
        int64_t edgeCount(0), nodeCount(0);
        dfs(p, g, visited, edgeCount, nodeCount);
        if(edgeCount < nodeCount * (nodeCount - 1)){reasonable = false; break;}
    }

    puts(reasonable ? "YES" : "NO");

    return 0;
}
