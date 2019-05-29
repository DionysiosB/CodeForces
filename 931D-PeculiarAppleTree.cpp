#include <cstdio>
#include <vector>
#include <map>

void dfs(long node, long from, long cur, const std::vector<std::vector<long> > &g, std::map<long, long> &dist){

    ++dist[cur];
    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(u == from){continue;}
        dfs(u, node, cur + 1, g, dist);
    }

    return;
}

int main(){

    long n; scanf("%ld", &n);
    std::vector<std::vector<long> > g(n + 1);
    for(long p = 2; p <= n; p++){
        long r; scanf("%ld", &r);
        g[p].push_back(r); g[r].push_back(p);
    }

    std::map<long, long> dist;
    dfs(1, 0, 0, g, dist);
    
    long total(0);
    for(std::map<long, long>::iterator it = dist.begin(); it != dist.end(); it++){total += ((it->second) & 1);}
    printf("%ld\n", total);

    return 0;
}
