#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        long res = (k > n) ? (k - n) : ((2 + (n - k) % 2) % 2);
        printf("%ld\n", res);
    }

    return 0;
}
