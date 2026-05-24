#include <cstdio>
#include <vector>

void dfs(long node, const std::vector<std::vector<long> > &g, std::vector<bool> &mark, std::vector<long long> &v, long long &cnt, long k){

    if(mark[node]){return;}
    mark[node] = 1;
    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(mark[u]){continue;}
        dfs(u, g, mark, v, cnt, k);
        v[node] += v[u];
    }

    cnt += (v[node] < (2 * k - v[node])) ? v[node] : (2 * k - v[node]);
    return;
}


int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long long> c(n, 0);
    for(long p = 0; p < 2 * k; p++){long x; scanf("%ld", &x); c[x - 1] = 1;}
    std::vector<std::vector<long> > g(n);
    for(long p = 1; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        --x; --y;
        g[x].push_back(y); g[y].push_back(x);
    }

    std::vector<bool> visited(n, 0);
    long long count(0);
    dfs(0, g, visited, c, count, k);
    printf("%lld\n", count);

    return 0;
}
