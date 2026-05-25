#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> cost(n + 1, 0); for(long p = 1; p <= n; p++){scanf("%ld", &cost[p]);}
    std::vector<long> before(n + 1, 0);
    std::vector<long> next(n + 1, 0); for(long p = 1; p <= n; p++){scanf("%ld", &next[p]); ++before[next[p]];}

    long sum(0);
    for(long p = 1; p <= n; p++){if(before[p] == 1 && next[p] == p){sum += cost[p];}}

    std::vector<long> vis(n + 1, 0);
    for(long p = 1; p <= n; p++){
        if(before[p]){continue;}
        long rm(p), pay(1e9); bool upd(false);
        while(vis[rm] < 2){
            if(vis[rm] == 1){pay = (pay < cost[rm]) ? pay : cost[rm]; upd = true;}
            ++vis[rm];
            rm = next[rm];
        }

        sum += upd * pay;
    }

    printf("%ld\n", sum);

    return 0;
}
