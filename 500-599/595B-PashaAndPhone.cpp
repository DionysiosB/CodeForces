#include <cstdio>
#include <vector>

int main(){

    const int N = 10;
    const int MOD = 1e9+7;

    long n; int k; scanf("%ld %d\n", &n, &k);
    long D = n / k;

    std::vector<long> t(N);
    t[0] = 1; for(long p = 1; p < N; p++){t[p] = N * t[p - 1];}

    std::vector<long> a(D);
    for(long p = 0; p < D; p++){scanf("%ld", &a[p]);}

    std::vector<int> b(D);
    for(long p = 0; p < D; p++){scanf("%d", &b[p]);}

    ;long long ans = 1;
    for(long p = 0; p < D; p++){
        long cur = (1 + (t[k] - 1) / a[p]) - ((t[k-1] * (b[p] + 1) - 1)/a[p] + 1) + ((b[p] > 0) ? (1 + (t[k - 1] * b[p] - 1)/a[p]) : 0);
        ans *= cur;
        ans %= MOD;
    }

    printf("%lld\n", ans);

    return 0;
}
