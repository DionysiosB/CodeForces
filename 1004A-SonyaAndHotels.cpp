#include <cstdio>
#include <vector>

int main(){

    long n, d; scanf("%ld %ld", &n, &d);
    std::vector<long> x(n); for(long p = 0; p < n; p++){scanf("%ld", &x[p]);}
    long cnt(2);
    for(long p = 1; p < n; p++){cnt += (x[p] - x[p - 1] == 2 * d) + 2 * (x[p] - x[p - 1] > 2 * d);}
    printf("%ld\n", cnt);

    return 0;
}
