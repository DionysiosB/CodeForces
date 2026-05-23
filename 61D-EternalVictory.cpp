#include <cstdio>
#include <iostream>
#include <vector>


void dfs(int64_t node, const std::vector<std::vector<std::pair<int64_t, int64_t> > > &g, std::vector<bool> &visited, std::vector<int64_t> &distance){

    if(visited[node]){return;}
    visited[node] = 1;

    for(int64_t p = 0; p < g[node].size(); p++){
        int64_t u = g[node][p].first;
        if(visited[u]){continue;}
        distance[u] = distance[node] + g[node][p].second;
        dfs(u, g, visited, distance);
    }

    return;
}


int main(){

    int64_t n; scanf("%lld", &n);
    std::vector<std::vector<std::pair<int64_t, int64_t> > > g(n);
    int64_t total(0);
    for(int64_t p = 1; p < n; p++){
        int64_t x, y, d; scanf("%lld %lld %lld", &x, &y, &d);
        --x; --y;
        g[x].push_back(std::make_pair(y, d));
        g[y].push_back(std::make_pair(x, d));
        total += 2 * d;
    }

    std::vector<bool> mark(n, 0);
    std::vector<int64_t> dist(n, 0);
    dfs(0, g, mark, dist);
    int64_t maxDist(0);
    for(int64_t p = 0; p < n; p++){maxDist = (maxDist > dist[p]) ? maxDist : dist[p];} 
    printf("%lld\n", total - maxDist);

    return 0;
}
