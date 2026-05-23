#include <cstdio>
#include <vector>

std::pair<long, long> dfs(long node, long from, const std::vector<std::vector<long> > &g){

    std::pair<long, long> ret = std::make_pair(0, node);
    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(u == from){continue;}
        std::pair<long, long> cur = dfs(u, node, g);
        ++cur.first;
        if(cur.first > ret.first){ret = cur;}
    }

    return ret;
}

int main(){

    long n; scanf("%ld", &n);
    std::vector<std::vector<long> > g(n + 1);
    for(long p = 1; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        g[x].push_back(y); g[y].push_back(x);
    }

    long node(1), from(1);
    std::pair<long, long> dist = dfs(node, from, g);
    node = from = dist.second;
    dist = dfs(node, from, g);
    printf("%ld\n", 3 * dist.first);

    return 0;
}
