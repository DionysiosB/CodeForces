#include <cstdio>
#include <vector>

void dfs(long node, const std::vector<std::vector<long> > &g, std::vector<bool> &visited, const std::vector<int> &colors, long col){

    if(visited[node]){return;}
    visited[node] = true;
    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(visited[u] || colors[u] != col){continue;}
        dfs(u, g, visited, colors, col);
    }

    return;
}


int main(){

    long n; scanf("%ld", &n);
    std::vector<int> color(n, 0);
    for(long p = 0; p < n; p++){scanf("%d", &color[p]);}
    std::vector<std::vector<long> > g(n);
    for(long p = 1; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        --x; --y;
        g[x].push_back(y); g[y].push_back(x);
    }

    std::vector<bool> markWB(n, 0);
    long countWB(0);
    for(long p = 0; p < n; p++){
        if(markWB[p] || color[p] == 1){continue;}
        ++countWB;
        dfs(p, g, markWB, color, 0);
    }

    std::vector<bool> markBW(n, 0);
    long countBW(0);
    for(long p = 0; p < n; p++){
        if(markBW[p] || color[p] == 0){continue;}
        ++countBW;
        dfs(p, g, markBW, color, 1);
    }

    long count = (countBW < countWB) ? countBW : countWB;
    printf("%ld\n", countBW);
    printf("%ld\n", countWB);
    printf("%ld\n", count);

    return 0;
}
