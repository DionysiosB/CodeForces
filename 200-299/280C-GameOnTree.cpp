#include <cstdio>
#include <vector>

void dfs(const std::vector<std::vector<long> > &g, long u, std::vector<bool> &been, long dist, double &total){

    if(been[u]){return;}
    been[u] = true;
    total += 1.0 / (1 + dist);
    for(long p = 0; p < g[u].size(); p++){
        long v = g[u][p];
        if(been[v]){continue;}
        dfs(g, v, been, 1 + dist, total);
    }

    return;
}


int main(){

    long n; scanf("%ld", &n);
    std::vector<std::vector<long> > g(n + 1);
    for(long p = 1; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        g[x].push_back(y); g[y].push_back(x);
    }

    std::vector<bool> visited(n + 1, 0);
    double sum(0);
    dfs(g, 1, visited, 0, sum);

    printf("%.8lf\n", sum);

    return 0;
}
