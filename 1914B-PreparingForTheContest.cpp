#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        for(long p = 1; p <= k; p++){printf("%ld ", p);}
        for(long p = n; p > k; p--){printf("%ld ", p);}
        puts("");
    }

}
