#include <cstdio>
#include <vector>

long dfs(long node, long from, const std::vector<std::vector<long> > &g, const std::vector<long> &cv){

    long total = (cv[from] != cv[node]);
    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(u == from){continue;}
        total += dfs(u, node, g, cv);
    }

    return total;
}


int main(){

    long n; scanf("%ld", &n);
    std::vector<std::vector<long> > g(n + 1);
    for(long p = 2; p <= n; p++){
        long x; scanf("%ld", &x);
        g[x].push_back(p); g[p].push_back(x);
    }

    std::vector<long> cv(n + 1); 
    for(long p = 1; p <= n; p++){scanf("%ld", &cv[p]);}

    printf("%ld\n", dfs(1, 0, g, cv));

    return 0;
}
