#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> pos(n); for(long p = 0; p < n; p++){scanf("%ld", &pos[p]);}
        std::vector<long> f(n, 0), g(n, 0);
        f[0] = 1; g[n - 1] = 1;
        for(long p = 1; p + 1 < n; p++){
            long prv = pos[p] - pos[p - 1];
            long nxt = pos[p + 1] - pos[p];
            if(prv < nxt){f[p] = nxt; g[p] = 1;}
            else{f[p] = 1; g[p] = prv;}
        }

        for(long p = 1; p + 1 < n; p++){f[p] += f[p - 1];}
        for(long p = n - 2; p > 0; p--){g[p] += g[p + 1];}

        for(long p = 0; p < f.size(); p++){printf("f: %ld -> %ld\n", p, f[p]);}; puts("\n\n"); for(long p = 0; p < g.size(); p++){printf("g: %ld -> %ld\n", p, g[p]);}
        long m; scanf("%ld", &m);
        while(m--){
            long from, to; scanf("%ld %ld", &from, &to);
            --from; --to;
            long res(0);
            if(from < to){res = f[to - 1] - (from ? f[from - 1] : 0);}
            else{res = g[to + 1] - ((from + 1 < n) ? g[from + 1] : 0);}
            printf("%ld\n", res);
        }

    }

}
