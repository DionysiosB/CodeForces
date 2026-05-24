#include <cstdio>
#include <vector>

int main(){

    const int N = 100100;
    long n; scanf("%ld\n", &n);
    std::vector<long> cumPrices(N + 1, 0);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        ++cumPrices[x];
    }

    for(long p = 1; p <= N; p++){cumPrices[p] += cumPrices[p - 1];}

    long q; scanf("%ld\n", &q);
    while(q--){
        long a; scanf("%ld\n", &a);
        printf("%ld\n", cumPrices[(a <= N) ? a : N]);
    }

    return 0;
}
