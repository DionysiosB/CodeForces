#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, k; scanf("%ld %ld", &n, &k);
        for(long p = 0; p < n; p++){putchar('a' + (p % k));}
        puts("");
    }

    return 0;
}
