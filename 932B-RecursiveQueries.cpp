#include <cstdio>
#include <vector>

int main(){

    const long N = 1e6 + 7;
    std::vector<long> g(N, 0);
    for(long p = 1; p < N; p++){
        if(p < 10){g[p] = p;}
        else{
            long prod(1), x(p);
            while(x > 0){long md = x % 10; if(md > 0){prod *= md;}; x /= 10;}
            g[p] = g[prod];
        }
    }

    std::vector<std::vector<long> > h(N, std::vector<long>(10, 0));
    for(long p = 1; p < N; p++){
        for(long u = 1; u < 10; u++){h[p][u] = h[p - 1][u];}
        ++h[p][g[p]];
    }

    long q; scanf("%ld", &q);
    while(q--){
        long l, r, k; scanf("%ld %ld %ld", &l, &r, &k);
        printf("%ld\n", h[r][k] - h[l - 1][k]);
    }

    return 0;
}
