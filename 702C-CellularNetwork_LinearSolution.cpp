#include <cstdio>
#include <vector>

long abs(long x){return (x > 0) ? x : (-x);}
long min(long x, long y){return (x < y) ? x : y;}
long max(long x, long y){return (x > y) ? x : y;}

int main(){

    long n, m; scanf("%ld %ld\n", &n, &m);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> b(m); for(long p = 0; p < m; p++){scanf("%ld", &b[p]);}

    long r(0);
    for(long p = 0, u = 0; p < n; p++){
        while(u < m - 1 && b[u] < a[p]){++u;}
        r = max(r, min(abs(b[u] - a[p]), abs(b[((u > 0) ? (u - 1) : u)] - a[p])));
    }

    printf("%ld\n", r);

    return 0;
}
