#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long cnt(0);
    for(long p = 0; p < n; p++){long x; scanf("%ld", &x); cnt += (x % 2);}
    printf("%ld\n", (2 * cnt < n) ? cnt : (n - cnt));

    return 0;
}
