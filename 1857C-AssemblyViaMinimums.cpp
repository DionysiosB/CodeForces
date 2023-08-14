#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long m = n * (n - 1) / 2; std::vector<long> v(m);
        for(long p = 0; p < m; p++){scanf("%ld", &v[p]);}
        sort(v.begin(), v.end());
        long idx(0), step(n - 1);
        std::vector<long> g;
        while(idx < m){g.push_back(v[idx]); idx += step; --step;}
        g.push_back(g.back());
        for(long p = 0; p < n; p++){printf("%ld ", g[p]);}
        puts("");
    }

}
