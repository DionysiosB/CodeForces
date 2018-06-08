#include <cstdio>
#include <vector>
#include <set>

void dfs(long node, const std::vector<std::vector<long> > &g, std::vector<long> &path, std::vector<bool> &been){

    if(been[node]){return;} //Should never need to exit here
    been[node] = 1;
    path.push_back(node);
    std::vector<long> adj = g[node];
    bool more(false);
    for(long p = 0; p < adj.size(); p++){
        long nn = adj[p];
        if(been[nn]){continue;}
        more = false;
        dfs(nn, g, path, been);
        break;
    }

    return;
}


int main(){

    long n, m, k; scanf("%ld %ld %ld", &n, &m, &k);
    std::vector<std::vector<long> > g(n + 1);
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        g[x].push_back(y); g[y].push_back(x);
    }

    std::vector<long> path;
    std::vector<bool> visited(n + 1, 0);
    dfs(1, g, path, visited);

    long last = path.back();
    std::set<long> ns; for(long p = 0; p < g[last].size(); p++){ns.insert(g[last][p]);}

    long start(0);
    while(!ns.count(path[start])){++start;}
    printf("%ld\n", path.size() - start);
    for(long p = start; p < path.size(); p++){printf("%ld ", path[p]);}
    puts("");

    return 0;
}
