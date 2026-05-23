#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);

    std::vector<long> order(m, 0);
    for(long p = 0; p < m; p++){order[p] = 1 + (m - 1 + (((p + m) % 2) ? 1 : (-1)) * p) / 2;}
    for(long p = 0; p < n; p++){printf("%ld\n", order[p % m]);}

    return 0;
}
