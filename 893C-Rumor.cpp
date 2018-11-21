#include <cstdio>
#include <vector>
typedef long long ll;

void dfs(long node, long &minCost, std::vector<bool> &vis, const std::vector<long> &costVec, const std::vector<std::vector<long> > &g){

    if(vis[node]){return;}
    vis[node] = true;
    minCost = (minCost < costVec[node]) ? minCost : costVec[node];
    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(vis[u]){continue;}
        dfs(u, minCost, vis, costVec, g);
    }

    return;
}

int main(){

    long n, m; scanf("%ld %ld", &n, &m);

    std::vector<long> costVec(n); for(long p = 0; p < n; p++){scanf("%ld", &costVec[p]);}

    std::vector<std::vector<long> > g(n);
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        --x; --y;
        g[x].push_back(y); g[y].push_back(x);
    }

    ll totalCost(0);
    std::vector<bool> visited(n, false);

    for(long p = 0; p < n; p++){
        if(visited[p]){continue;}
        long compCost(costVec[p]);
        dfs(p, compCost, visited, costVec, g);
        totalCost += compCost;
    }

    printf("%lld\n", totalCost);
    
    return 0;
}
