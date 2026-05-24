#include <cstdio>
#include <vector>

void dfs(const std::vector<std::vector<long>> &g, long node, std::vector<bool> &vis, long &order, long &dsz){

    if(vis[node]){return;}
    vis[node] = true;
    ++order; dsz += g[node].size();
    for(long p = 0; p < g[node].size(); p++){
        long nn = g[node][p];
        if(vis[nn]){continue;}
        dfs(g, nn, vis, order, dsz);
    }

    return;
}


int main(){

    long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
    std::vector<long> c(k); for(long p = 0; p < k; p++){scanf("%ld", &c[p]);}
    std::vector<std::vector<long> > g(n + 1);
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        g[x].push_back(y); g[y].push_back(x);
    }

    long cnt(0);
    std::vector<bool> visited(n + 1, 0);
    long maxNodes(0);
    for(long p = 0; p < k; p++){
        long numNodes(0), edges(0);
        dfs(g, c[p], visited, numNodes, edges);
        maxNodes = (maxNodes > numNodes) ? maxNodes : numNodes;
        edges /= 2;
        cnt += (numNodes * (numNodes - 1)) / 2 - edges;
    }

    long rem(0);
    for(long p = 1; p <= n; p++){
        if(visited[p]){continue;}
        rem += g[p].size();
        cnt += maxNodes;
        ++maxNodes;
    }

    cnt -= rem / 2;

    printf("%ld\n", cnt);

    return 0;
}
