#include <cstdio>
#include <vector>
#include <algorithm>

void dfs(const std::vector<std::vector<long>> &g, long cur, std::vector<long> &rank, std::vector<long> &below){
    rank.push_back(cur);
    for(long p = 0; p < g[cur].size(); p++){
        long node = g[cur][p];
        dfs(g, g[cur][p], rank, below); 
        below[cur] += below[node];
    }
}


int main(){

    long n, q; scanf("%ld %ld", &n, &q);
    std::vector<std::vector<long>> g(n + 1);
    for(long p = 2; p <= n; p++){
        long x; scanf("%ld", &x);
        g[x].push_back(p);
    }
    
    for(long p = 1; p <= n; p++){sort(g[p].begin(), g[p].end());}

    std::vector<long> pos(1, 0), below(n + 1, 1); dfs(g, 1, pos, below);
    std::vector<long> v(n + 1, 0); for(long p = 1; p <= n; p++){v[pos[p]] = p;}

    while(q--){
        long u, k; scanf("%ld %ld", &u, &k);
        if(below[u] < k){puts("-1"); continue;}
        long where = v[u] + k - 1;
        printf("%ld\n", pos[where]);
    }

    return 0;
}
