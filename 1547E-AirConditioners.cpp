#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);

        std::vector<long> v(k), w(k), f(n, 2e9 + 7);
        for(long p = 0; p < k; p++){scanf("%ld", &v[p]);}
        for(long p = 0; p < k; p++){scanf("%ld", &w[p]);}
        for(long p = 0; p < k; p++){f[v[p] - 1] = w[p];}
        for(long p = 1; p < n; p++){f[p] = std::min(f[p], f[p - 1] + 1);}
        for(long p = n - 2; p >= 0; p--){f[p] = std::min(f[p], f[p + 1] + 1);}
        for(long p = 0; p < n; p++){printf("%ld ", f[p]);}
        puts("");
    }

}
