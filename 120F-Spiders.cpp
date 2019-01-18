#include <cstdio>
#include <vector>

void dfs(long node, long from, const std::vector<std::vector<long> > &g, long length, long &dist, long &furthest){

    if(length > dist){dist = length; furthest = node;}
    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(u == from){continue;}
        dfs(u, node, g, length + 1, dist, furthest);
    }

    return;
}

long getDiameter(std::vector<std::vector<long> > g){

    long root(0), furthest(0), length(0), maxDist(0);
    dfs(root, -1, g, length, maxDist, furthest);

    root = furthest; length = maxDist = 0;
    dfs(root, -1, g, length, maxDist, furthest);

    return maxDist;
}

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    long n; scanf("%ld", &n);
    long total(0);
    while(n--){
        long rd; scanf("%ld", &rd);
        std::vector<std::vector<long> > g(rd);
        for(long r = 1; r < rd; r++){
            long x, y; scanf("%ld %ld", &x, &y);
            --x; --y;
            g[y].push_back(x);
            g[x].push_back(y); 
        }
        
        total += getDiameter(g);
    }

    printf("%ld\n", total);

    return 0;
}
