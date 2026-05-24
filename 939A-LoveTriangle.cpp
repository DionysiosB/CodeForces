#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> f(n + 1);
    for(long p = 1; p <= n; p++){scanf("%ld", &f[p]);}

    bool triangle(false);
    for(long p = 1; p <= n && !triangle; p++){triangle = triangle | (f[f[f[p]]] == p);}
    puts(triangle ? "YES" : "NO");

    return 0;
}
