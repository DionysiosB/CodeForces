#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        std::vector<std::pair<long, long> > a(n);
        for(long p = 0; p < n; p++){long x; scanf("%ld", &x); a[p] = std::make_pair(x, p);}
        sort(a.begin(), a.end());
        std::vector<long> b(n); for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}
        sort(b.begin(), b.end());
        std::vector<long> c(n); for(long p = 0; p < n; p++){c[a[p].second] = b[p];}
        for(long p = 0; p < n; p++){printf("%ld ", c[p]);}
        puts("");
    }

}
