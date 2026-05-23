#include <cstdio>
#include <cmath>

int main(){

    long n, x; scanf("%ld %ld\n", &n, &x);

    long total(0);
    for(long p = 1; p <= sqrt(x) && p <= n; p++){
        if((x % p == 0) && (x / p <= n)){total += 2 - (p == x / p);}
    }

    printf("%ld\n", total);

    return 0;
}
