#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        printf("%ld\n", n);
        for(long p = 1; p <= n; p++){printf("%ld\n", p);}
    }

    return 0;
}
