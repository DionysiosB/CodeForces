#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long long a, b, n; scanf("%lld %lld %lld", &a, &b, &n);
        printf("%d\n", (a >= n * b || a == b) ? 1 : 2);
    }

}
