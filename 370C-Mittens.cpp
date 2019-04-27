#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld ", &a[p]);}
    sort(a.begin(),a.end());

    long diff(0); for(long p = 0; p < n; p++){diff += (a[p] != a[(p + n / 2) % n]);}
    printf("%ld\n", diff);
    for(long p = 0; p < n; p++){printf("%ld %ld\n", a[p], a[(p + n / 2) % n]);}
    puts("");

    return 0;
}
