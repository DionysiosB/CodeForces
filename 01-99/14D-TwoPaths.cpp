#include <cstdio>
#include <vector>

void dfs(long node, long from, const std::vector<std::vector<bool> > &g, long length, long &dist, long &furthest){

    if(length > dist){dist = length; furthest = node;}
    for(long u = 0; u < g[node].size(); u++){
        if(!g[node][u]){continue;}
        if(u == from){continue;}
        dfs(u, node, g, length + 1, dist, furthest);
    }

    return;
}

long getDiameter(std::vector<std::vector<bool> > g, long start){

    long root(start), furthest(start), length(0), maxDist(0);
    dfs(root, -1, g, length, maxDist, furthest);

    root = furthest; length = maxDist = 0;
    dfs(root, -1, g, length, maxDist, furthest);

    return maxDist;
}

int main(){

    long n; scanf("%ld", &n);
    std::vector<std::vector<bool> > g(n, std::vector<bool>(n, 0));
    for(long p = 1; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        --x; --y;
        g[x][y] = g[y][x] = 1;
    }

    long profit(0);
    for(long p = 0; p < n; p++){
        for(long q = p + 1; q < n; q++){
            if(!g[p][q]){continue;}
            g[p][q] = g[q][p] = 0;
            long lenA = getDiameter(g, p);
            long lenB = getDiameter(g, q);
            g[p][q] = g[q][p] = 1;
            long prod = lenA * lenB;
            profit = (profit > prod) ? profit : prod;
        }
    }

    printf("%ld\n", profit);

    return 0;
}
