#include <cstdio>
#include <vector>

void dfs(long node, long from, const std::vector<std::vector<long> > &g, std::vector<long> &v){
    if(v[node]){return;}
    v[node] = 3 - v[from];
    for(long p = 0; p < g[node].size(); p++){
        long next = g[node][p];
        if(v[next]){continue;}
        dfs(next, node, g, v);
    }
    
    return;
}

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::vector<long> > g(n + 1);
    std::vector<long> v(n + 1, 0), t(m, 0);
    std::vector<std::pair<long, long> > h(m);
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y); 
        g[x].push_back(y); g[y].push_back(x); 
        h[p] = std::make_pair(x, y);
    }

    v[0] = 2; 
    dfs(1, 0, g, v);

    bool possible(true);
    for(long p = 0; p < m; p++){
        long x(h[p].first), y(h[p].second);
        if(v[x] == v[y]){possible = false; break;}
        else if(v[x] == 2 && v[y] == 1){t[p] = 1;}
    }

    if(possible){
        puts("YES");
        for(long p = 0; p < m; p++){printf("%ld", t[p]);}
    }
    else{puts("NO");}

    return 0;
}
