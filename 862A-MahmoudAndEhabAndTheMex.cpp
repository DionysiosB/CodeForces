#include <cstdio>
#include <vector>

int main(){

    const long N = 101;
    long n, x; scanf("%ld %ld", &n, &x);
    std::vector<bool> v(N, 0);
    for(long p = 0; p < n; p++){long u; scanf("%ld", &u); v[u] = 1;}
    long count(v[x]);
    for(long p = 0; p < x; p++){count += (1 - v[p]);}

    printf("%ld\n", count);

    return 0;
}
