#include <cstdio>
#include <iostream>
#include <vector>

void dfs(int64_t node, const std::vector<std::vector<int64_t> > &g, std::vector<bool> &visited, std::vector<int64_t> &a, std::vector<int64_t> &inc, std::vector<int64_t> &dec){

    if(visited[node]){return;}
    visited[node] = 1;

    for(int64_t p = 0; p < g[node].size(); p++){
        int64_t u = g[node][p];
        if(visited[u]){continue;}
        dfs(u, g, visited, a, inc, dec);
        inc[node] = (inc[node] > inc[u]) ? inc[node] : inc[u];
        dec[node] = (dec[node] > dec[u]) ? dec[node] : dec[u];
    }

    a[node] += inc[node] - dec[node];
    if(a[node] > 0){dec[node] += a[node];}
    else if(a[node] < 0){inc[node] -= a[node];}

    return;
}


int main(){

    int64_t n; scanf("%lld", &n);
    std::vector<std::vector<int64_t> > g(n);
    for(int64_t p = 1; p < n; p++){
        int64_t x, y; scanf("%lld %lld", &x, &y);
        --x; --y;
        g[x].push_back(y); g[y].push_back(x);
    }

    std::vector<int64_t> a(n, 0);
    for(int64_t p = 0; p < n; p++){scanf("%lld", &a[p]);}

    std::vector<int64_t> inc(n, 0);
    std::vector<int64_t> dec(n, 0);
    std::vector<bool> been(n, 0);
    dfs(0, g, been, a, inc, dec);

    printf("%lld\n", inc[0] + dec[0]);

    return 0;
}
