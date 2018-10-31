#include <cstdio>
#include <vector>
#include <set>

void dfs(long node, long from, const std::vector<std::vector<long> >&g, std::set<long> &s, const std::vector<int> &d, int depth, int odd, int even){

    int flag = ((depth % 2) & odd) || ( ( (depth + 1) % 2) && even);

    if(d[node] ^ flag){s.insert(node); if(depth & 1){odd = 1 - odd;} else{even = 1 - even;}}

    for(long p = 0; p < g[node].size(); p++){
        long u = g[node][p];
        if(u == from){continue;}
        dfs(u, node, g, s, d, (depth + 1) % 2, odd, even);
    }

    return;
}

int main(){

    long n; scanf("%ld", &n);
    std::vector<std::vector<long> > g(n);
    for(long p = 1; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        x--; y--;
        g[x].push_back(y); g[y].push_back(x);
    }

    std::vector<int> a(n); for(long p = 0; p < n; p++){scanf("%d", &a[p]);}
    std::vector<int> b(n); for(long p = 0; p < n; p++){scanf("%d", &b[p]);}
    std::vector<int> w(n); for(long p = 0; p < n; p++){w[p] = a[p] ^ b[p];}

    std::vector<bool> vis(n, 0);
    std::set<long> chg;
    long count(0);

    dfs(0, 0, g, chg, w, 0, 0, 0);

    printf("%ld\n", chg.size());
    for(std::set<long>::iterator it = chg.begin(); it != chg.end(); it++){printf("%ld\n", 1 + (*it));}

    return 0;
}
