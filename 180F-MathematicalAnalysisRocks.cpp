#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<std::pair<long, long> > v(n + 1);
    for(long p = 1; p <= n; p++){long x; scanf("%ld", &x); v[x].second = p;}
    for(long p = 1; p <= n; p++){long x; scanf("%ld", &x); v[x].first = p;}

    std::vector<long> f(n + 1);
    for(long p = 1; p <= n; p++){f[v[p].first] = v[p].second;}
    for(long p = 1; p <= n; p++){printf("%ld ", f[p]);}
    puts("");

    return 0;
}
