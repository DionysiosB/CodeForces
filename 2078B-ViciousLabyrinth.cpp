#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        k %= 2;
        for(long p = 1; p <= n - 2; p++){printf("%ld ", n - !k);}
        printf("%ld %ld\n", n, n - 1);
    }

}
