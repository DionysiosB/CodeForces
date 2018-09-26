#include <cstdio>
#include <vector>

void dfs(long node, const std::vector<std::vector<long> > &g, std::vector<bool> &visited, std::vector<long> &group, long root){

    if(visited[node]){return;}
    visited[node] = 1;
    group[node] = root;
    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(visited[u]){continue;}
        dfs(u, g, visited, group, root);
    }

    return;
}


int main(){

    long n; scanf("%ld", &n);

    std::vector<long> target(n + 1);
    for(long p = 1; p <= n; p++){scanf("%ld", &target[p]);}

    std::vector<std::vector<long> > g(n + 1);
    for(long p = 1; p <= n; p++){
        long d; scanf("%ld", &d);
        long u = p - d; if((u > 0) && (u <= n)){g[p].push_back(u); g[u].push_back(p);}
        long v = p + d; if((v > 0) && (v <= n)){g[p].push_back(v); g[v].push_back(p);}
    }

    std::vector<bool> mark(n + 1, 0);
    std::vector<long> group(n + 1, 0);
    for(long p = 1; p <= n; p++){if(mark[p]){continue;}; dfs(p, g, mark, group, p);}

    bool possible = true;
    for(long p = 1; p <= n; p++){if(group[p] != group[target[p]]){possible = false; break;}}
    puts(possible ? "YES" : "NO");

    return 0;
}
