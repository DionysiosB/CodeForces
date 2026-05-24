#include <cstdio>
#include <vector>

void dfs(long node, const std::vector<std::vector<long> > &g, std::vector<bool> &visited, long dist, long &maxDist, long &furthest){

    if(visited[node]){return;}
    visited[node] = true;
    if(dist > maxDist){furthest = node; maxDist = dist;}

    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(visited[u]){continue;}
        dfs(u, g, visited, dist + 1, maxDist, furthest);
    }

    return;
}


int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::vector<long> > g(n);
    for(long p = 1; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        --x; --y;
        g[x].push_back(y); g[y].push_back(x);
    }

    std::vector<bool> visitedA(n, 0);
    long maxDist(0), furthest(0);
    dfs(0, g, visitedA, 0, maxDist, furthest);

    std::vector<bool> visitedB(n, 0);
    dfs(furthest, g, visitedB, 0, maxDist, furthest);

    printf("%ld\n", maxDist);

    return 0;
}
