#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(n, 0);
    for(long p = 0; p < m; p++){long x; scanf("%ld", &x); ++a[x - 1];}
    long mn(m);
    for(long p = 0; p < n; p++){mn = (mn < a[p]) ? mn : a[p];}
    printf("%ld\n", mn);

    return 0;
}
