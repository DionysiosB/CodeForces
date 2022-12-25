#include <cstdio>
#include <vector>

void dfs(long node, const std::vector<std::vector<long> > &g, std::vector<bool> &visited, std::vector<long> &order){

    if(visited[node]){return;}
    visited[node] = 1;
    
    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(visited[u]){continue;}
        dfs(u, g, visited, order);
    }

    order.push_back(node);
    return;
}

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::vector<long> > g(n);
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        --x; --y; g[x].push_back(y);
    }

    std::vector<long> order;
    std::vector<bool> visited(n, 0);
    for(long p = 0; p < n; p++){
        if(visited[p]){continue;}
        dfs(p, g, visited, order);
    }

    for(long p = 0; p < order.size(); p++){printf("%ld ", 1 + order[p]);}
    puts("");

    return 0;
}
