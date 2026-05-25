#include <cstdio>
#include <vector>

void dfs(long node, const std::vector<std::vector<long> > &g, std::vector<long> &pop, std::vector<long> &hap, std::vector<bool> &vis, bool &possible){
    if(!possible){return;}
    if(vis[node]){return;}
    vis[node] = true;

    long cnt(0);
    for(long u = 0; u < g[node].size(); u++){
        long cur = g[node][u];
        if(vis[cur]){continue;}
        dfs(cur, g, pop, hap, vis, possible);
        pop[node] += pop[cur];
        cnt += hap[cur];
    }

    if((hap[node] + pop[node]) % 2){possible = false; return;}
    hap[node] = (hap[node] + pop[node]) / 2;
    if(hap[node] < 0 || hap[node] > pop[node]){possible = false; return;}
    if(hap[node] < cnt){possible = false; return;}

    return;
}


int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<long> pop(n + 1); for(long p = 1; p <= n; p++){scanf("%ld", &pop[p]);}
        std::vector<long> hap(n + 1); for(long p = 1; p <= n; p++){scanf("%ld", &hap[p]);}
        std::vector<bool> vis(n + 1, false); 

        std::vector<std::vector<long> > g(n + 1);
        for(long p = 1; p < n; p++){
            long x, y; scanf("%ld %ld", &x, &y);
            g[x].push_back(y); g[y].push_back(x);
        }

        bool possible(true);
        dfs(1, g, pop, hap, vis, possible);
        puts(possible ? "YES" : "NO");
    }

    return 0;
}
