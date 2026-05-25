#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld", &n);
    std::vector<long> a(n + 1, 0); for(long p = 1; p <= n; p++){scanf("%ld", &a[p]);}
    long ans(1e9 + 7);
    for(long p = 1; p <= n; p++){
        if(p > 1){long f = a[p] / (p - 1); ans = (ans < f) ? ans : f;}
        if(p < n){long g = a[p] / (n - p); ans = (ans < g) ? ans : g;}
    }

    printf("%ld\n", ans);

    return 0;
}
