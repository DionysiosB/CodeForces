#include <cstdio>
#include <vector>
#include <algorithm>

void dfs(const std::vector<std::vector<long>> &g, long cur, std::vector<long> &below){
    below[cur] = 1;
    for(long p = 0; p < g[cur].size(); p++){
        long node = g[cur][p];
        dfs(g, g[cur][p], below); 
        below[cur] += below[node];
    }
}


long find(const std::vector<std::vector<long>> &g, const std::vector<long> &below, long node, long rem){

    if(rem <= 0){return -1;}
    if(rem == 1){return node;}
    --rem;
    for(long p = 0; p < g[node].size(); p++){
        long nx = g[node][p];
        if(rem > below[nx]){rem -= below[nx];}
        else{return find(g, below, nx, rem);}
    }

    return -1;
}


int main(){

    long n, q; scanf("%ld %ld", &n, &q);
    std::vector<std::vector<long>> g(n + 1);
    for(long p = 2; p <= n; p++){
        long x; scanf("%ld", &x);
        g[x].push_back(p);
    }
    
    for(long p = 1; p <= n; p++){sort(g[p].begin(), g[p].end());}

    std::vector<long> v(n + 1);
    std::vector<long> cnt(n + 1, 0);
    dfs(g, 1, cnt);

    while(q--){
        long u, k; scanf("%ld %ld", &u, &k);
        long res = find(g, cnt, u, k);
        printf("%ld\n", res);
    }

    return 0;
}
