#include <cstdio>
#include <vector>

int main(){

    long n, m, r; scanf("%ld %ld %ld", &n, &m, &r);
    long bp(1e9); for(long p = 0; p < n; p++){long x; scanf("%ld", &x); bp = (bp < x) ? bp : x;}
    long ap(-1);  for(long p = 0; p < m; p++){long x; scanf("%ld", &x); ap = (ap > x) ? ap : x;}
    long res = r + (ap > bp) * (ap - bp) * (r / bp);
    printf("%ld\n", res);

    return 0;
}
