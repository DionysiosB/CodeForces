#include <cstdio>
#include <iostream>
#include <vector>

long find(long x, std::vector<long> v){return (v[x] == x) ? x : (v[x] = find(v[x], v));}

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<std::pair<long, long> > cables(m + 1);
    for(long p = 1; p <= m; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        cables[p] = std::make_pair(x, y);
    }


    long k; scanf("%ld", &k);
    while(k--){
        std::vector<long> f(n + 1); for(long p = 1; p <= n; p++){f[p] = p;}
        long l, r; scanf("%ld %ld", &l, &r);
        long count(n);
        for(long p = 1; p <= m; p++){
            if(l <= p && p <= r){continue;}
            long x = find(cables[p].first, f);
            long y = find(cables[p].second, f);
            if(x != y){--count; f[y] = x;}
        }
        printf("%ld\n", count);
    }

    return 0;
}
