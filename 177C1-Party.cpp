#include <cstdio>
#include <iostream>
#include <vector>
#include <set>

void dfs(long node, const std::vector<std::vector<long> > &g, std::vector<bool> &visited, std::vector<long> &component){

    if(visited[node]){return;}
    visited[node] = 1; component.push_back(node);

    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(visited[u]){continue;}
        dfs(u, g, visited, component);
    }

    return;
}


int main(){

    long n; scanf("%ld", &n);
    std::vector<std::vector<long> > g(n);
    long k; scanf("%ld", &k);
    for(long p = 0; p < k; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        --x; --y; g[x].push_back(y); g[y].push_back(x);
    }

    long m; scanf("%ld", &m);
    std::set<std::pair<long, long> > h;
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        --x; --y;
        h.insert(std::make_pair(x, y));
        h.insert(std::make_pair(y, x));
    }

    std::vector<bool> visited(n, 0);
    long maxSize(0);
    for(long p = 0; p < n; p++){
        if(visited[p]){continue;}
        std::vector<long> comp;
        dfs(p, g, visited, comp);
        
        bool possible(true);
        for(long a = 0; a < comp.size(); a++){
            if(!possible){break;}
            for(long b = a + 1; b < comp.size(); b++){
                std::pair<long, long> test = std::make_pair(comp[a], comp[b]);
                if(h.count(test) > 0){possible = false; break;}
            }
        }

        if(possible && comp.size() >= maxSize){maxSize = comp.size();}
    }

    printf("%ld\n", maxSize);

    return 0;
}
