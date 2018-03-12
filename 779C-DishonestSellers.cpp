#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, k; scanf("%ld %ld", &n, &k);
    std::vector<long> a(n), b(n);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    for(long p = 0; p < n; p++){scanf("%ld", &b[p]);}

    std::vector<std::pair<long, long> > d(n);
    for(long p = 0; p < n; p++){d[p] = std::pair<long, long>(a[p] - b[p], a[p]);}
    sort(d.begin(), d.end());

    long long total(0);
    for(long p = 0; p < n; p++){total += d[p].second - ((p >= k) && (d[p].first > 0)) * d[p].first;}
    printf("%lld\n", total);

    return 0;
}
