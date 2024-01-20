#include <cstdio>
#include <vector>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    std::vector<long> b(m); for(long p = 0; p < m; p++){scanf("%ld", &b[p]);}

    long u(0), v(0);
    for(long p = 0; p < m + n; p++){
        if((v >= m) || (u < n && a[u] <= b[v])){printf("%ld ", a[u]); ++u;}
        else if((u >= n) || (v < m && b[v] <= a[u])){printf("%ld ", b[v]); ++v;}
    }

    puts("");
}
