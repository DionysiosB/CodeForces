#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        k = (k < 30 ? k : 30);
        long m = (1 << k);
        long res = (n + 1 < m) ? (n + 1) : m;
        printf("%ld\n", res);
    }
}
