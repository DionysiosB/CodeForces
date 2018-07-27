#include <cstdio>
#include <vector>

void dfs(long node, const std::vector<std::vector<long> > &g, std::vector<bool> &been, std::vector<long> &dist){

    if(been[node]){return;}
    been[node] = 1;
    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(been[u]){continue;}
        dist[u] = dist[node] + 1;
        dfs(u, g, been, dist);
    }

    return;
}


int main(){

    long n, x; scanf("%ld %ld", &n, &x);
    std::vector<std::vector<long> > g(n + 1);
    for(long p = 1; p < n; p++){
        long a, b; scanf("%ld %ld", &a, &b);
        g[a].push_back(b); g[b].push_back(a);
    }

    std::vector<bool> visitedA(n + 1, 0);
    std::vector<long> distA(n + 1, 0);
    dfs(1, g, visitedA, distA);

    std::vector<bool> visitedX(n + 1, 0);
    std::vector<long> distX(n + 1, 0);
    dfs(x, g, visitedX, distX);

    long turns(0);
    for(long p = 1; p <= n; p++){
        if(distA[p] < distX[p]){continue;}
        turns = (turns > (2 * distA[p])) ? turns : (2 * distA[p]);
    }

    printf("%ld\n", turns);

    return 0;
}
