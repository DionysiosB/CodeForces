#include <cstdio>
#include <vector>
#include <set>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<std::vector<long> > g(n + 1);
        for(long p = 0; p < m; p++){
            long a, b; scanf("%ld %ld", &a, &b);
            g[a].push_back(b); g[b].push_back(a);
        }

        long x(0), y(0);
        for(long p = 1; !y && p <= n; p++){
            if(g[p].size() == 1){
                long middle = g[p][0];
                y = g[middle].size() - 1;
                for(long q = 0; !x && q < g[middle].size(); q++){
                    long center = g[middle][q];
                    if(g[center].size() == 1){continue;}
                    x = g[center].size();
                }
            }
        }

        printf("%ld %ld\n", x, y);
    }

}
