#include <cstdio>
#include <vector>

int main(){

    long n, x, y; scanf("%ld %ld %ld", &n, &x, &y);
    std::vector<std::vector<long> > g(n + 1);
    for(long p = 1; p < n; p++){
        long u, v; scanf("%ld %ld", &u, &v);
        g[u].push_back(v); g[v].push_back(u);
    }



    return 0;
}
