//Does NOT work for cyclical networks
#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::vector<long> > g(n + 1);
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        g[x].push_back(y); g[y].push_back(x);
    }

    bool possible(true);
    std::vector<bool> visited(n + 1, 0);
    long total(0);
    for(long p = 1; p <= n; p++){
        if(visited[p]){continue;}
        std::vector<long> adj = g[p];
        long cls = adj.size();
        long maxd = cls;
        for(long p = 0; p < cls; p++){
            maxd = (maxd > g[adj[p]].size()) ? maxd : g[adj[p]].size();
            visited[adj[p]] = 1;
        }
        total += maxd * (maxd + 1) / 2;
    }

    puts((m >= total) ? "YES" : "NO");

    return 0;
}
