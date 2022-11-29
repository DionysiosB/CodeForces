#include <cstdio>
#include <vector>
#include <set>

void dfs(long node, long from, const std::vector<std::vector<std::pair<long, long> > > &gs, std::vector<long> &cw, const long &stop){

    if(from == stop){return;}
    for(long p = 0; p < gs[node].size(); p++){
        long nxt = gs[node][p].first;
        long weight = gs[node][p].second;
        if(nxt == from){continue;}

        cw[nxt] = cw[node] ^ weight;
        dfs(nxt, node, gs, cw, stop);
    }

}


int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, a, b; scanf("%ld %ld %ld", &n, &a, &b);
        std::vector<std::vector<std::pair<long, long> > > g(n + 1);
        for(long p = 1; p < n; p++){
            long x, y, w; scanf("%ld %ld %ld", &x, &y, &w);
            g[x].push_back(std::make_pair(y, w));
            g[y].push_back(std::make_pair(x, w));
        }

        std::vector<long> fv(n + 1, -1); fv[a] = 0; dfs(a, 0, g, fv, b);
        std::vector<long> bv(n + 1, -1); bv[b] = 0; dfs(b, 0, g, bv, -1);

        //for(long p = 1; p <= n; p++){printf("fv %ld -> %ld\n", p, fv[p]);}; puts("\n===\n");
        //for(long p = 1; p <= n; p++){printf("bv %ld -> %ld\n", p, bv[p]);}

        bool ans(fv[b] == 0); std::set<long> ws;
        for(long p = 1; p <= n; p++){
            if(bv[p] < 0 || p == b){continue;}
            if(bv[p] == 0){ans = true; break;}
            ws.insert(bv[p]);
        }
        for(long p = 1; !ans && p <= n; p++){
            if(p == a || p == b || fv[p] <= 0){continue;}
            if(ws.count(fv[p])){
                //printf("Found value %ld\n", bv[p]);
                ans = true; break;}
        }

        puts(ans ? "YES" : "NO");
    }

}
