#include <cstdio>
#include <vector>
typedef long long ll;

const ll MOD = 1000000007;

ll dfs(long node, long from, const std::vector<std::vector<long> > &g, const std::vector<long> &a, long minValue, long diff, long root){

    ll res(1);
    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(u == from){continue;}
        if(a[u] <= minValue + diff && ((a[u] > minValue) || (a[u] == minValue && u > root))){res *= (dfs(u, node, g, a, minValue, diff, root) + 1); res %= MOD;}
    }

    return res;
}



int main(){

    long d, n; scanf("%ld %ld", &d, &n);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<std::vector<long> > g(n);
    for(long p = 1; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        --x; --y;
        g[x].push_back(y); g[y].push_back(x);
    }

    ll total(0);
    for(long p = 0; p < n; p++){
        ll cur = dfs(p, -1, g, a, a[p], d, p);
        total += cur; total %= MOD;
    }

    printf("%lld\n", total);

    return 0;
}
