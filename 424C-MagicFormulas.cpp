#include <cstdio>
#include <vector>

int main(){

    long n; scanf("%ld\n", &n);
    std::vector<long> f(n + 1, 0);

    long res(0);
    for(long p = 1; p <= n; p++){
        f[p] = f[p - 1] ^ p;
        long x; scanf("%ld", &x);
        res ^= x;
    }

    for(long p = 1; p <= n; p++){
        res ^= f[n % p];
        if((n / p) % 2){res ^= f[p - 1];}
    }

    printf("%ld\n", res);

    return 0;
}
