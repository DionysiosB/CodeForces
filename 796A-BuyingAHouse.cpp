#include <cstdio>

int main(){

    const int D = 10;
    long n, m, k; scanf("%ld %ld %ld\n", &n, &m, &k);
    long minDist(n);
    for(long p = 1; p <= n; p++){
        long a; scanf("%ld", &a);
        if(a <= 0 || a > k){continue;}
        long dist = (p > m) ? (p - m) : (m - p);
        minDist = (minDist < dist) ? minDist : dist;
    }

    printf("%ld\n", D * minDist);

    return 0;
}
