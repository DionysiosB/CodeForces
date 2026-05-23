#include <cstdio>
#include <iostream>
#include <vector>

int main (){   
    
    const int64_t MOD = 1000000007;

    int64_t n; scanf("%lld", &n);
    std::vector<int64_t> a(n + 1, 0);
    for(long p = 1; p < n; p++){scanf("%lld", &a[p]);}
    std::vector<std::vector<int64_t>> f(n + 1, std::vector<int64_t>(2, 0));
    for(long p = 0; p < n; p++){int b; scanf("%d", &b); f[p][b] = 1;}
    for(long p = n - 1; p > 0; p--){
        f[a[p]][1] = (f[a[p]][1] * (f[p][0] + f[p][1]) + f[a[p]][0] * f[p][1]) % MOD;
        f[a[p]][0] = (f[a[p]][0] * (f[p][0] + f[p][1])) % MOD;
    }

    printf("%lld\n", f[0][1]);

    return 0;
}
