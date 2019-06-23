#include <cstdio>
#include <vector>

int main(){

    const long W = 101;

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(W, 0);
    for(long p = 0; p < m; p++){long x; scanf("%ld", &x); ++a[x];}

    long mx(0);
    for(long d = 1; d <= m / n; d++){
        long rem(n);
        for(long u = 0; u < W; u++){rem -= a[u] / d;}
        mx = (rem > 0) ? mx : d;
    }

    printf("%ld\n", mx);

    return 0;
}
