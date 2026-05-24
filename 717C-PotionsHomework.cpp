#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    const long MOD = 10007;
    long n; scanf("%ld", &n);
    std::vector<long long> a(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    sort(a.begin(), a.end());
    long long total(0);
    for(long p = 0; p < n; p++){total += (a[p] * a[n - 1 - p]) % MOD; total %= MOD;}
    printf("%lld\n", total);

    return 0;
}
