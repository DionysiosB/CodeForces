#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::vector<long> > g(n);
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        --x; --y;
        g[x].push_back((n + y - x) % n);
        g[y].push_back((n + x - y) % n);
    }

    for(long p = 0; p < n; p++){sort(g[p].begin(), g[p].end());}

    std::vector<long> div; for(long p = 1; p < n; p++){if(n % p == 0){div.push_back(p);}}

    bool possible(false);
    for(long p = 0; (!possible) && (p < div.size()); p++){
        long d = div[p];
        bool res(true);
        for(long u = 0; res && (u < n); u++){
            if(g[u].size() != g[(u + d) % n].size()){res = false; break;}
            for(long v = 0; v < g[u].size(); v++){
                if((g[u][v] != g[(u + d) % n][v])){res = false; break;}
            }
        }
        if(res){possible = true;}
    }

    puts(possible ? "Yes" : "No");

    return 0;
}
