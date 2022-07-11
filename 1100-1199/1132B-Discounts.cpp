#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n; scanf("%ld", &n);
    long long total(0);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]); total += a[p];}
    long m; scanf("%ld", &m);
    std::vector<long> q(m); for(long p = 0; p < m; p++){scanf("%ld", &q[p]);}

    sort(a.begin(), a.end());
    for(long p = 0; p < m; p++){printf("%lld\n", total - a[n - q[p]]);}

    return 0;
}
