#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long ans = k * (n / k) + ((k / 2) < (n % k) ? (k / 2) : (n % k));
        printf("%ld\n", ans);
    }

    return 0;
}
