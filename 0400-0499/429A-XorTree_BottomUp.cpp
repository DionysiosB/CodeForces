#include <cstdio>
#include <vector>
#include <set>

void dfs(long node, const std::vector<std::vector<long> >&g, std::vector<bool> &visited, std::set<long> &s, const std::vector<int> &d){

    if(visited[node]){return;}
    visited[node] = true;

    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(visited[u]){continue;}
        std::set<long> t;
        dfs(u, g, visited, t, d);
        s.insert(t.begin(), t.end());
    }

    long flips = s.size() & 1;
    if(flips ^ d[node]){s.insert(node);}
    printf("Node: %ld\t flips:%ld\tSize: %ld\n", 1 + node, flips, s.size());

    return;
}

int main(){

    long n; scanf("%ld", &n);
    std::vector<std::vector<long> > g(n);
    for(long p = 1; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        x--; y--;
        g[x].push_back(x); g[y].push_back(x);
    }

    std::vector<int> a(n); for(long p = 0; p < n; p++){scanf("%d", &a[p]);}
    std::vector<int> b(n); for(long p = 0; p < n; p++){scanf("%d", &b[p]);}
    std::vector<int> w(n); for(long p = 0; p < n; p++){w[p] = a[p] ^ b[p];}

    std::vector<bool> vis(n, 0);
    std::set<long> chg;

    dfs(0, g, vis, chg, w);

    printf("%ld\n", chg.size());
    for(std::set<long>::iterator it = chg.begin(); it != chg.end(); it++){printf("%ld\n", 1 + (*it));}

    return 0;
}
