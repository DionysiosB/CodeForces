#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    int n, m; scanf("%d %d", &n, &m);
    std::vector<int> r(n, 0);
    std::vector<int> c(m, 0);
    for(int row = 0; row < n; row++){
        for(int col = 0; col < m; col++){
            int x; scanf("%d", &x);
            r[row] += x;
            c[col] += x;
        }
    }

    int64_t total(-n * m);
    for(long p = 0; p < n; p++){total += ((1LL << r[p]) - 1) +((1LL << (m - r[p])) - 1);}
    for(long p = 0; p < m; p++){total += ((1LL << c[p]) - 1) +((1LL << (n - c[p])) - 1);}

    printf("%lld\n", total);

    return 0;
}
