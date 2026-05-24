#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<std::vector<long> > g(n + 1);
    for(long p = 2; p <= n; p++){long x; scanf("%ld", &x); g[x].push_back(p);}
    bool spruce(true);
    for(long p = 1; p <= n; p++){
        if(g[p].size() == 0){continue;}
        long cnt(0);
        for(long u = 0; u < g[p].size(); u++){cnt += (g[g[p][u]].size() == 0);}
        if(cnt < 3){spruce = false; break;}
    }

    puts(spruce ? "Yes" : "No");

    return 0;
}
