#include <cstdio>

int main(){

    const int M = 8;
    long n, k; scanf("%ld %ld", &n, &k);
    long s(0), total(0), days(-1);
    for(long p = 1; p <= n; p++){
        long x; scanf("%ld", &x);
        long y = x + (total > s) * (total - s);
        y = (y < M) ? y : M;
        total += x;
        s += y;
        if(s >= k){days = p; break;}
    }

    printf("%ld\n", days);

    return 0;
}
