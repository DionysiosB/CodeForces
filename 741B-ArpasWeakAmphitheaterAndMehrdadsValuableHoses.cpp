#include <cstdio>
#include <iostream>
#include <vector>

void dfs(long node, const std::vector<std::vector<long> > &g, std::vector<long> &h, long root){

    if(h[node] >= 0){return;}
    h[node] = root;
    for(long p = 0; p < g[node].size(); p++){dfs(g[node][p], g, h, root);}
    return;
}


int main(){

    long n, m, W; scanf("%ld %ld %ld", &n, &m, &W);
    std::vector<long> w(n); for(long p = 0; p < n; p++){scanf("%ld", &w[p]);}
    std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
    std::vector<std::vector<long> > g(n);
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        --x; --y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    std::vector<long> head(n, -1);
    for(long p = 0; p < n; p++){dfs(p, g, head, p);}

    std::vector<long> sw(n, 0); std::vector<long> sb(n, 0);
    std::vector<std::vector<long> > sv(n);
    for(long p = 0; p < n; p++){sw[head[p]] += w[p]; sb[head[p]] += b[p]; sv[head[p]].push_back(p);}

    std::vector<long> f(W + 1, 0);
    for(long p = 0; p < n; p++){
        if(head[p] != p){continue;}
        for(long ww = W; ww >= 0; ww--){
            if(sw[p] <= ww){f[ww] = std::max(f[ww], f[ww - sw[p]] + sb[p]);}
            for(long t = 0; t < sv[p].size(); t++){
                long u = sv[p][t];
                if(w[u] <= ww){f[ww] = std::max(f[ww], f[ww - w[u]] + b[u]);}
            }
        }
    }

    printf("%ld\n", f[W]);

    return 0;
}
