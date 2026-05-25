#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        long ans = 10 * ((x % 10) - 1) + (x / 1 > 0) + 2*(x / 10 > 0) + 3*(x / 100 > 0) + 4*(x / 1000 > 0);
        printf("%ld\n", ans);
    }

    return 0;
}
