#include <cstdio>
#include <vector>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        std::map<long, std::vector<std::pair<long, long> > > g;
        bool possible(true);
        long start(-1);
        long n; scanf("%ld", &n);
        for(long p = 1; p < n; p++){
            long x, y; scanf("%ld %ld", &x, &y);
            g[x].push_back(std::make_pair(y, p));
            g[y].push_back(std::make_pair(x, p));
            if(g[x].size() > 2 || g[y].size() > 2){possible = false;}
            if(g[x].size() == 1){start = x;}
            else if(g[y].size() == 1){start = y;}
        }

        if(!possible){puts("-1"); continue;}

        long cur(start), weight(2);
        std::vector<long> res(n, 0), vis(n + 1, 0);
        for(long p = 0; p < n; p++){
            std::vector<std::pair<long, long> > cv = g[cur];
            for(long idx = 0; idx < cv.size(); idx++){
                if(vis[cv[idx].first]){continue;}
                res[cv[idx].second] = weight; weight = 5 - weight;
                vis[cur] = true; cur = cv[idx].first;
            }
        }

        for(long p = 1; p < n; p++){printf("%ld ", res[p]);}
        puts("");
    }

}
