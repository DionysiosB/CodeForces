#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    if(n <= 6){printf("%ld\n", m); return 0;}

    std::vector<std::vector<long> > g(n, std::vector<long>(n, 0));
    for(long p = 0; p < m; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        g[x - 1][y - 1] = g[y - 1][x - 1] = 1;
    }

    long mn(1e9);
    for(long a = 0;  a < n; a++){
        for(long b = 0; b < n; b++){
            long x(0);
            for(long c = 0; c < n; c++){if(g[c][a] && g[c][b]){++x;}}
            mn = (mn < x) ? mn : x;
        }
    }

    printf("%ld\n", m - mn);

    return 0;
}
