#include <cstdio>
#include <vector>

int main(){

    long n, m, c; scanf("%ld %ld %ld\n", &n, &m, &c);
    std::vector<long> a(n); std::vector<long> b(m);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    for(long p = 0; p < m; p++){scanf("%ld", &b[p]);}
    long t(0);
    for(long p = 0; p < n; p++){
        if(p < m){t += b[p];}
        if(p > n - m){t -= b[p - (n - m + 1)];}
        printf("%ld ", (a[p] + t) % c);
    }

    puts("");
    return 0;
}
