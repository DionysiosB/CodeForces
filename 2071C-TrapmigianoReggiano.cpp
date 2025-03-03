#include <cstdio>
#include <vector>
#include <algorithm>


void dfs(long node, long from, const std::vector<std::vector<long> > &g, std::vector<long> &dist){
    for(long nxt : g[node]){
        if(nxt == from){continue;}
        dist[nxt] = dist[node] + 1;
        dfs(nxt, node, g, dist);
    }
}


int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, s, t; scanf("%ld %ld %ld", &n, &s, &t);
        --s; --t;
        std::vector<std::vector<long> > g(n);
        for(long p = 1; p < n; p++){
            long x, y; scanf("%ld %ld", &x, &y);
            g[x - 1].push_back(y - 1); g[y - 1].push_back(x - 1);
        }

        std::vector<long> dist(n, 0);
        dfs(t, t, g, dist);

        std::vector<std::pair<long, long> > dv(n);
        for(long p = 0; p < n; p++){dv[p] = std::make_pair(dist[p], p);}
        sort(dv.rbegin(), dv.rend());
        for(long p = 0; p < n; p++){printf("%ld ", 1 + dv[p].second);}
        puts("");
    }

}
