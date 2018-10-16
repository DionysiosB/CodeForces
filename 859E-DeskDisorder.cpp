#include <cstdio>
#include <iostream>
#include <vector>

void dfs(int64_t node, int64_t from, const std::vector<std::vector<int64_t> > &g, std::vector<bool> &visited, int64_t &count, bool &cycle, bool &self){

    if(visited[node]){return;}
    visited[node] = 1; ++count;

    for(int64_t p = 0; p < g[node].size(); p++){
        int64_t u = g[node][p];
        if(u == from){continue;}
        else if(u == node){self = true;}
        else if(visited[u]){cycle = true;}
        else{dfs(u, node, g, visited, count, cycle, self);}
    }

    return;
}


int main(){

    const int64_t MOD = 1000000007;
    int64_t n; scanf("%lld", &n);
    std::vector<std::vector<int64_t> > g(2 * n);
    for(int64_t p = 0; p < n; p++){
        int64_t x, y; scanf("%lld %lld", &x, &y);
        --x; --y;
        g[x].push_back(y); g[y].push_back(x);
    }

    std::vector<bool> visited(2 * n, false);
    int64_t total(1);
    for(int64_t p = 0; p < 2 * n; p++){
        if(visited[p]){continue;}
        int64_t count(0);
        bool cycle(false), self(false);
        dfs(p, -1, g, visited, count, cycle, self);
        if(self){count = 1;}
        else if(cycle){count = 2;}
        total *= count; total %= MOD;
    }

    printf("%lld\n", total);

    return 0;
}
