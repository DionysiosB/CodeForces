#include <cstdio>
#include <vector>

int main(){

    const int D = 5;
    const int P = 5;
    const int M = 100000;

    long x; scanf("%ld\n", &x);
    std::vector<int> dv(D, 0);
    for(int p = 0; p < D; p++){dv[p] = x % 10; x /= 10;}
    long long y = 10000 * dv[D - 1] + 1000 * dv[D - 3] + 100 * dv[0] + 10 * dv[D - 4] + dv[D - 2];
    long long ans(1);
    for(int p = 0; p < P; p++){ans *= y; ans %= M;}
    printf("%05lld\n", ans);

    return 0;
}
