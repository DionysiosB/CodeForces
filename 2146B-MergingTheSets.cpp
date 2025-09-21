#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, m; scanf("%ld %ld", &n, &m);
        std::vector<std::vector<long> > vs(n);
        std::vector<long> w(m + 1, 0);
        for(long p = 0; p < n; p++){
            long len; scanf("%ld", &len);
            vs[p] = std::vector<long>(len);
            for(long u = 0; u < len; u++){
                long x; scanf("%ld", &x);
                vs[p][u] = x; ++w[x];
            }
        }

        bool ans(true);
        for(long p = 1; ans && p <= m; p++){if(!w[p]){ans = false;}}

        long cnt(1);
        for(long p = 0; ans && p < n; p++){
            bool rem(true);
            for(long u = 0; rem && u < vs[p].size(); u++){
                if(w[vs[p][u]] <= 1){rem = false;}
            }
            cnt += rem;
            if(cnt >= 3){break;}
        }

        puts(cnt >= 3 ? "YES" : "NO");
    }

}
