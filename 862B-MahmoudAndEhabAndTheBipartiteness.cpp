#include <cstdio>
#include <iostream>
#include <vector>

void dfs(int64_t node, const std::vector<std::vector<int64_t> > &g, std::vector<bool> &visited, std::vector<bool> &gv, bool grp){

    if(visited[node]){return;}
    visited[node] = 1;
    gv[node] = grp;
    for(int64_t p = 0; p < g[node].size(); p++){
        int64_t u = g[node][p];
        if(visited[u]){continue;}
        dfs(u, g, visited, gv, 1 - grp);
    }

    return;
}


int main(){

    int64_t n; scanf("%lld", &n);
    std::vector<std::vector<int64_t> > g(n);
    for(int64_t p = 1; p < n; p++){
        int64_t x, y; scanf("%lld %lld", &x, &y);
        --x; --y; g[x].push_back(y); g[y].push_back(x);
    }

    std::vector<bool> visited(n, 0);
    std::vector<bool> gv(n, 0);
    dfs(0, g, visited, gv, 0);

    int64_t a(0);
    for(int64_t p = 0; p < n; p++){a += gv[p];}
    int64_t b = n - a;

    int64_t ans = a * b - (n - 1);
    printf("%lld\n", ans);

    return 0;
}
