#include <cstdio>
#include <iostream>

int main(){

    int64_t n, m, k, x, y; scanf("%lld %lld %lld %lld %lld\n", &n, &m, &k, &x, &y);
    int64_t t = n * m + (n > 2) * (n - 2) * m;
    int64_t p = k / t;
    k %= t;

    int64_t a[101][101];
    for (int64_t i = 0; i < n; i++){
        for (int64_t j = 0; j < m; j++){
            a[i][j] += p;
            if (i > 0 && i < n - 1){a[i][j] += p;}
        }
    }

    for(int64_t i = 0; i < n && k > 0; i++){for(int64_t j = 0; j < m && k > 0; j++){++a[i][j]; --k;}}
    for(int64_t i = n - 2; k > 0 && i > 0; i--){for (int64_t j = 0; j < m && k>0; j++){++a[i][j]; --k;}}

    int64_t maxq = -1, minq = 1e18 + 1;
    for(int64_t i = 0; i < n; i++){for(int64_t j = 0; j < m; j++){
        if(a[i][j] > maxq){maxq = a[i][j];}
        if(a[i][j] < minq){minq = a[i][j];}
        }
    }

    printf("%lld %lld %lld\n", maxq, minq, a[x - 1][y - 1]);

    return 0;
}
