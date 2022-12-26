#include <cstdio>
#include <vector>

long dfs(const std::vector<std::vector<long> > &g, long node, long from, long &cnt){

    long below(1);
    for(long p = 0; p < g[node].size(); p++){
        long cur = g[node][p];
        if(cur == from){continue;}
        long u = dfs(g, cur, node, cnt);
        if(u % 2 == 0){++cnt;}
        below += u;
    }

    return below;
}

int main(){

    long n; scanf("%ld", &n);
    if(n % 2){puts("-1"); return 0;}

    std::vector<std::vector<long> > g(n + 1);
    for(long p = 1; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        g[x].push_back(y); g[y].push_back(x);
    }

    long cnt(0);
    dfs(g, 1, 0, cnt);
    printf("%ld\n", cnt);

    return 0;
}
