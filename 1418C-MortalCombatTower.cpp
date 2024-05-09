#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        std::vector<long> f(n), g(n);
        g[0] = a[0];  g[1] = a[0] + a[1];
        f[0] = n + 1; f[1] = g[0]; 
        for(long p = 2; p < n; p++){
            f[p] = std::min(g[p - 1], g[p - 2]);
            g[p] = std::min(a[p] + f[p - 1], a[p] + a[p - 1] + f[p - 2]);
        }

        printf("%ld\n", std::min(f.back(), g.back()));
    }

}
