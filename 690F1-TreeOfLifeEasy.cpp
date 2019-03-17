#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> d(n + 1, 0);
    for(long p = 1; p < n; p++){
        long x, y; scanf("%ld %ld", &x, &y);
        ++d[x]; ++d[y];
    }

    long total(0);
    for(long p = 1; p <= n; p++){total += d[p] * (d[p] - 1) / 2;}
    printf("%ld\n", total);

    return 0;
}
