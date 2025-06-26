#include<cstdio>
#include<vector>

void dfs(long node, const std::vector<std::vector<long> > &g, std::vector<bool> &vis){
    if(vis[node]){return;}
    vis[node] = true;
    for(long p = 0; p < g[node].size(); p++){dfs(g[node][p], g, vis);}
    return;
}

int main(){

    const long long MOD = 1e9 + 7;

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<std::pair<long, long> > v(n);
        for(long p = 0; p < n; p++){scanf("%ld", &v[p].first);}
        for(long p = 0; p < n; p++){scanf("%ld", &v[p].second);}
        std::vector<std::vector<long> > g(n + 1);
        for(long p = 0; p < n; p++){
            g[v[p].first].push_back(v[p].second);
            g[v[p].second].push_back(v[p].first);
        }

        long long cnt(1);
        std::vector<bool> vis(n + 1, 0);
        for(long p = 1; p <= n; p++){
            if(vis[p]){continue;}
            dfs(p, g, vis);
            cnt *= 2; cnt %= MOD;
        }

        printf("%lld\n", cnt);
    }

}
