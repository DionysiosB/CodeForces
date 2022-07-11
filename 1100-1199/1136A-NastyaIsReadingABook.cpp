#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n);
    for(long p = 0; p < n; p++){long x, y; scanf("%ld %ld", &x, &y); a[p] = y;}
    long k; scanf("%ld", &k);
    long cnt(0); for(long p = 0; p < n; p++){cnt += (a[p] >= k);}
    printf("%ld\n", cnt);

    return 0;
}
