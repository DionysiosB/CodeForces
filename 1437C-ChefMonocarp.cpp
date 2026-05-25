#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long q; scanf("%ld", &q);
    while(q--){
        long n; scanf("%ld", &n);
        std::vector<long> t(n + 1); for(long p = 1; p <= n; p++){scanf("%ld", &t[p]);}
        sort(t.begin(), t.end());
        std::vector<std::vector<long> > f(n + 1, std::vector<long>(2 * n + 1, 0));
        for(long p = 1; p <= n; p++){f[p][0] = 1e9;}
        for(long p = 1; p <= n; p++){
            for(long w = 1; w <= 2 * n; w++){
                long penalty = t[p] - w; if(penalty < 0){penalty = -penalty;}
                long act = f[p - 1][w - 1] + penalty;
                long idle = f[p][w - 1];
                f[p][w] = (idle < act) ? idle : act;
            }
        }

        //for(long p = 0; p <= n; p++){for(long w = 0; w <= 2 * n; w++){printf("%ld ", f[p][w]);}; puts("");}

        printf("%ld\n", f[n][2 * n]);
    }

    return 0;
}
