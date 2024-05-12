#include <cstdio>
#include <vector>

int main(){

    const long N = 50007;

    long t; scanf("%ld", &t);
    while(t--){
        long m; scanf("%ld", &m);
        std::vector<std::vector<long> > v(m);
        for(long p = 0; p < m; p++){
            long n; scanf("%ld", &n);
            for(long u = 0; u < n; u++){
                long x; scanf("%ld", &x);
                v[p].push_back(x);
            }
        }

        std::vector<bool> f(N, 0);
        std::vector<long> w(m, -1);
        for(long p = m - 1; p >= 0; p--){
            for(long u = 0; u < v[p].size(); u++){
                long x = v[p][u];
                if(!f[x] && w[p] < 0){w[p] = x;}
                f[x] = 1;
            }
            if(w[p] < 0){break;}
        }

        if(w[0] < 0){puts("-1");}
        else{
            for(long p = 0; p < m; p++){printf("%ld ", w[p]);}
            puts("");
        }
    }

}
