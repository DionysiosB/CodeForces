#include <cstdio>
#include <vector>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld",&n, &k);
        std::vector<long> f(n + 1, 0), w(n + 1, 0);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++f[x];}
        for(long p = 1; p <= n; p++){w[p] = w[p - 1] + f[p];}
        long ans(0);
        for(long g = 1; g <= n; g++){
            long tst = f[g] + f[2 * g <= n ? 2 * g : 0] + f[3 * g <= n ? 3 * g : 0] + (n - w[4 * g <= n ? (4 * g - 1) : n]);
            if(tst + k >= n){ans = g;}
        }

        printf("%ld\n", ans);
    }

}
