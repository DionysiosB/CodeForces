#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(n), b(m);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    for(long p = 0; p < m; p++){scanf("%ld", &b[p]);}
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), std::greater<long>());
    int64_t count(0);
    for(long p = 0; p < n && p < m && a[p] < b[p]; p++){count += (b[p] - a[p]);}
    printf("%lld\n", count);

    return 0;
}
