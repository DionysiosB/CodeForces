#include <cstdio>
#include <vector>

int main(){

    long n, a, x, b, y; scanf("%ld %ld %ld %ld %ld", &n, &a, &x, &b, &y);
    a %= n; x %= n; b %= n; y %= n;

    std::vector<long> v(n, -1), w(n, -1);
    for(long p = a, t = 1; true; p++, p %= n, t++){v[p] = t; if(p == x){break;}}
    for(long p = b, t = 1; true; p += n - 1, p %= n, t++){w[p] = t; if(p == y){break;}}
    bool ans(false);
    for(long p = 0; p < n; p++){printf("%ld ", v[p]);}; puts("");
    for(long p = 0; p < n; p++){printf("%ld ", w[p]);}; puts("");
    for(long p = 0; p < n; p++){if(v[p] > 0 && w[p] > 0 && v[p] == w[p]){ans = true; break;}}
    puts(ans ? "YES" : "NO");

    return 0;
}
