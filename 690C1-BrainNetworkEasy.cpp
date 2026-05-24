#include <cstdio>
#include <vector>

void dfs(long node, const std::vector<std::vector<long> > &g, std::vector<bool> &been, long &num){

    if(been[node]){return;}
    been[node] = 1; ++num;
    std::vector<long> adj = g[node];
    for(long p = 0; p < adj.size(); p++){
        long next = adj[p];
        if(been[next]){continue;}
        dfs(next, g, been, num);
    }

    return ;
}

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    if(m != n - 1){puts("no"); return 0;}

    std::vector<std::vector<long> > g(n + 1);
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        g[x].push_back(y); g[y].push_back(x);
    }

    std::vector<bool> visited(n + 1, 0);
    long count(0);
    dfs(1, g, visited, count);
    puts((count >= n) ? "yes" : "no");

    return 0;
}
