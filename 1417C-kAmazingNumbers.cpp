#include <cstdio>
#include <vector>
#include <map>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::map<long, std::vector<long> > pos;
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            pos[x].push_back(p);
        }

        long idx(n + 1);
        std::vector<long> res(n + 1, -1);
        for(long a = 1; a <= n; a++){
            if(!pos.count(a)){continue;}
            std::vector<long> cur = pos[a];
            cur.push_back(n);
            long prev(-1), mx(0);
            for(long p = 0; p < cur.size(); p++){
                long dist = cur[p] - prev;
                mx = (mx > dist) ? mx : dist;
                prev = cur[p];
            }
            for(long p = mx; p < idx; p++){res[p] = a;}
            idx = (idx < mx) ? idx : mx;
        }

        for(long p = 1; p <= n; p++){printf("%ld ", res[p]);}
        puts("");
    }

    return 0;
}
