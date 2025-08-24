#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> g(n);
        for(long p = 0; p < n; p++){scanf("%ld", &g[p]);}
        sort(g.rbegin(), g.rend());
        long long total(0);
        for(long p = 0; p < g.size(); p += 2){total += g[p];}
        printf("%lld\n", total);
    }

}
