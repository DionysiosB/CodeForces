#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long long n, k; scanf("%lld %lld", &n, &k);
        printf("%lld\n", 2 * (k - 1) + (1 << (n - k + 1)));
    }

}
