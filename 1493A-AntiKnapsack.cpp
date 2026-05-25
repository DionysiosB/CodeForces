#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        printf("%ld\n", n - (k + 1) / 2);
        for(long p = (k + 1) / 2; p < k; p++){printf("%ld ", p);}
        for(long p = k + 1; p <= n; p++){printf("%ld ", p);}
        puts("");
    }

}
