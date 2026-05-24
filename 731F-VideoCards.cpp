#include <cstdio>
#include <iostream>
#include <vector>

int main(){

    const long N = 400005;
    long n; scanf("%ld", &n);
    std::vector<long> v(N + 1, 0);
    while(n--){long x; scanf("%ld", &x); ++v[x];}
    std::vector<int64_t> f(N + 1, 0);
    for(long p = N - 1; p >= 0; p--){f[p] = f[p + 1] + v[p];}
    int64_t max(0);
    for(long p = 1; p < N / 2; p++){
        if(!v[p]){continue;}
        int64_t total(0);
        for(long q = p; q <= N / 2; q += p){total += (f[q] - f[q + p]) * q;}
        max = (total > max) ? total : max;
    }

    std::cout << max << std::endl;

    return 0;
}
