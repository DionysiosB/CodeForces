#include <cstdio>
#include <vector>

int main(){

    long n, m, c; scanf("%ld %ld %ld\n", &n, &m, &c);
    std::vector<long> a(n); std::vector<long> b(m);
    for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
    for(long p = 0; p < m; p++){scanf("%ld", &b[p]);}
    for(long p = 0; p < n - m + 1; p++){
        for(long r = 0; r < m; r++){a[p + r] += b[r]; a[p + r] %= c;}
    }
    for(long p = 0; p < n; p++){printf("%ld ", a[p]);}; puts("");
    return 0;
}
