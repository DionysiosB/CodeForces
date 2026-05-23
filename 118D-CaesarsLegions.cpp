#include <cstdio>
#include <vector>

int main(){

    const long long M = 100000000;

    long n1, n2, k1, k2; scanf("%ld %ld %ld %ld\n", &n1, &n2, &k1, &k2);

    std::vector<std::vector<long long> > f(1 + n1, std::vector<long long>(1 + n2, 0));
    std::vector<std::vector<long long> > g(1 + n1, std::vector<long long>(1 + n2, 0));

    f[0][0] = 1; g[0][0] = 1;

    for(long row = 0; row <= n1; row++){
        for(long col = 0; col <= n2; col++){
            for(long u = 1; u <= k1 && u <= row; u++){f[row][col] += g[row - u][col];}
            for(long u = 1; u <= k2 && u <= col; u++){g[row][col] += f[row][col - u];}
            f[row][col] %= M; g[row][col] %= M;
        }
    }

    printf("%lld\n", (f[n1][n2] + g[n1][n2]) % M);

    return 0;
}
