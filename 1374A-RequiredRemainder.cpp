#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, n; scanf("%ld %ld %ld", &x, &y, &n);
        long ans = n - (n % x) + y;
        ans -= (ans > n) * x;
        printf("%ld\n", ans);
    }

    return 0;
}
