#include <cstdio>
#include <iostream>
#include <vector>
#include <map>

int main(){

    const int N = 30007;
    const int D = 250;
    long n, d; scanf("%ld %ld", &n, &d);
    std::vector<long> g(N, 0);
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); ++g[x];}

    std::vector<std::vector<long> > f(N, std::vector<long>(D, -1));
    f[d][d] = g[d];
    long maxGems(0);
    for(long p = 0; p < N; p++){
        for(long len = 1; len < D; len++){
            if(f[p][len] < 0){continue;}
            maxGems = maxGems > f[p][len] ? maxGems : f[p][len];

            long target(0);
            target = p + len - 1; if(target >= N){continue;}
            f[target][len - 1] = (f[target][len - 1] > (f[p][len] + g[target])) ? f[target][len - 1] : (f[p][len] + g[target]);

            target = p + len; if(target >= N){continue;}
            f[target][len] = (f[target][len] > (f[p][len] + g[target])) ? f[target][len] : (f[p][len] + g[target]);

            target = p + len + 1; if(target >= N){continue;}
            f[target][len + 1] = (f[target][len + 1] > (f[p][len] + g[target])) ? f[target][len + 1] : (f[p][len] + g[target]);
        }
    }

    printf("%ld\n", maxGems);

    return 0;
}
