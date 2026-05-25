#include <cstdio>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a(k + 1, 0);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        a[x] = 1 - a[x];
    }

    long cnt(0);
    for(long p = 1; p <= k; p++){cnt += a[p];}
    long ans = n - cnt / 2;
    printf("%ld\n", ans);

    return 0;
}
