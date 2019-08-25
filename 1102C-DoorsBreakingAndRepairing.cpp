#include <cstdio>

int main(){

    long n, x, y; scanf("%ld %ld %ld", &n, &x, &y);
    long cnt(0);
    for(long p = 0; p < n; p++){long a; scanf("%ld", &a); cnt += (a <= x);}
    printf("%ld\n", (x <= y) ? ((cnt + 1) / 2) : n);

    return 0;
}
