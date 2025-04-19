#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> f(n + 1), g(n);
        for(long p = 1; p <= n; p++){scanf("%ld", &f[p]);}
        for(long p = 0; p < n; p++){scanf("%ld", &g[p]);}
        
        std::vector<bool> v(n + 1, 0);
        long cnt(0);
        for(long p = 0; p < n; p++){
            long x = g[p];
            while(!v[x]){++cnt; v[x] = true; x = f[x];}
            printf("%ld ", cnt);
        }
        puts("");
    }

}
