#include <cstdio>
#include <vector>
#include <algorithm>

void dfs(long node, const std::vector<std::vector<long> > &g, std::vector<bool> &visited, std::vector<long> &group){

    if(visited[node]){return;}
    visited[node] = 1;
    group.push_back(node);
    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(visited[u]){continue;}
        dfs(u, g, visited, group);
    }

    return;
}


int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}

    std::vector<std::vector<long> > g(n);
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        --x; --y;
        g[x].push_back(y); g[y].push_back(x);
    }

    std::vector<bool> mark(n, 0);
    for(long p = 0; p < n; p++){
        if(mark[p]){continue;}
        std::vector<long> linked;
        dfs(p, g, mark, linked);
        long s = linked.size();
        std::vector<long> values(s);
        for(long q = 0; q < s; q++){values[q] = a[linked[q]];}
        sort(linked.begin(), linked.end());
        sort(values.begin(), values.end());
        for(long q = 0; q < s; q++){a[linked[q]] = values[s - 1 - q];}
    }

    for(long p = 0; p < n; p++){printf("%ld ", a[p]);}
    puts("");

    return 0;
}
