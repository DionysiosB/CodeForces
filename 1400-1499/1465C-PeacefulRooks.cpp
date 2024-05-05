#include <cstdio>
#include <vector>
#include <map>
 
int main(){
 
    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<long> target(n + 1, 0);
        std::vector<bool> done(n, false); done[0] = 1;

        for(long p = 0; p < m; p++){
            long x, y; scanf("%ld %ld", &x, &y);
            target[x] = y;
        }

        //for(long p = 0; p <= n; p++){printf("Target[%ld] = %ld\n", p, target[p]);}
 
        long moves(0);
        for(long p = 1; p <= n; p++){
            if(!target[p] || done[p] || target[p] == p){continue;}
            long cnt(0), cur(p);
            //printf("Got in p=%ld\n", cur);
            while(target[cur] && !done[cur]){
                done[cur] = true;
                cur = target[cur];
                ++cnt;
            }

            moves += cnt + (target[cur] > 0);
        }
 
        printf("%ld\n", moves);
    }
 
 
}
