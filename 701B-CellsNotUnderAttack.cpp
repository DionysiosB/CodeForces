#include <cstdio>
#include <vector>

int main(){

    long long n, m; scanf("%lld %lld\n", &n, &m);
    std::vector<bool> rows(n + 1, 0);
    std::vector<bool> cols(n + 1, 0);
    long long takenRows(0), takenCols(0);

    long long safe(n * n);

    while(m--){
        long long r, c; scanf("%lld %lld\n", &r, &c);
        if(!rows[r]){rows[r] = 1; ++takenRows; safe -= (n - takenCols);}
        if(!cols[c]){cols[c] = 1; ++takenCols; safe -= (n - takenRows);}
        printf("%lld ", safe);
    }

    puts("");

    return 0;
}
