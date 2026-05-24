#include <cstdio>
#include <vector>

void dfs(long node, const std::vector<long> &parent, const std::vector<std::vector<long> > &h, std::vector<long> &sz, std::vector<long> &centroid){

    sz[node] = 1; centroid[node] = node; 
    long cand(0);
    for(long p = 0; p < h[node].size(); p++){
        long u = h[node][p];
        dfs(u, parent, h, sz, centroid);
        sz[node] += sz[u];
        if(cand <= 0 || sz[u] > sz[cand]){cand = u;}
    }

    if(2 * sz[cand] > sz[node]) {
        long cn = centroid[cand];
        while(sz[node] > 2 * sz[cn]){cn = parent[cn];}
        centroid[node] = cn;
    }
}

int main(){

    long n, q; scanf("%ld %ld", &n, &q);
    std::vector<long> parent(n + 1);
    std::vector<std::vector<long> > h(n + 1);
    for(long p = 2; p <= n; p++){
        long x; scanf("%ld", &x);
        parent[p] = x; h[x].push_back(p);
    }

    std::vector<long> centroid(n + 1), sz(n + 1);
    dfs(1, parent, h, sz, centroid);

    for(long p = 0; p < q; p++){long x; scanf("%ld", &x); printf("%ld\n", centroid[x]);}

    return 0;
}
