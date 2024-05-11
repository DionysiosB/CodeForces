#include <cstdio>
#include <vector>
#include <algorithm>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, q; scanf("%ld %ld", &n, &q);
        std::vector<long> a(n); for(long p = 0; p < n; p++){scanf("%ld", &a[p]);}
        long long f(a[0]), g(0);
        for(long p = 1; p < n; p++){
            f = std::max(f, std::max(g + a[p], 0LL));
            g = std::max(g, f - a[p]);
        }

        printf("%lld\n", std::max(f,g));
    }

}
