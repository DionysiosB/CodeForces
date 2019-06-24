#include <cstdio>

int main(){

    long n, m; scanf("%ld %ld", &n, &m);
    long s(0);
    for(long p = 0; p < n; p++){
        long x; scanf("%ld", &x);
        s += x; printf("%ld ", s / m);
        s %= m;
    }

    puts("");

    return 0;
}
