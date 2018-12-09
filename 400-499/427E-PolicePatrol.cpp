#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long long> x(n);
    for(long p = 0; p < n; p++){scanf("%lld", &x[p]);}
    long long total(0);
    for(long p = 0; p < n / 2; p += m){total += 2 * (x[n/2] - x[p]);}
    for(long p = n - 1; p > n / 2; p -= m){total += 2 * (x[p] - x[n/2]);}
    printf("%lld\n", total);

    return 0;
}
