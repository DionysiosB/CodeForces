#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    const int64_t MOD = 1000000007;
    int64_t n; scanf("%lld", &n);
    std::vector<int64_t> a(n);
    for(int64_t p = 0; p < n; p++){scanf("%lld", &a[p]);}
    sort(a.begin(), a.end());
    std::vector<int64_t> pow(n);
    int64_t u(1);
    for(int64_t p = 0; p < n; p++){pow[p] = u % MOD; u *= 2; u %= MOD;}
    u = 1; 
    for(int64_t p = n - 1; p >= 0; p--){pow[p] -= u % MOD; u *= 2; u %= MOD;}

    int64_t total(0);
    for(long p = 0; p < n; p++){total += (pow[p] * a[p]) % MOD; total %= MOD;}
    printf("%lld\n", total);

    return 0;
}
