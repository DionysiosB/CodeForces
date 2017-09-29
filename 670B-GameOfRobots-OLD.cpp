#include <cstdio>
#include <cmath>
#include <vector>

int main(){

    long n, k; scanf("%ld %ld\n", &n, &k);
    std::vector<long> id(n + 1);
    for(long p = 1; p <= n; p++){scanf("%ld ", &id[p]);}

    long x = (-1.0 + sqrt(1 + 8 * k)) / 2.0;
    long rem = k - x * (x + 1) / 2;
    if(rem == 0){rem = x;}
    printf("%ld\n", id[rem]);

    return 0;
}
