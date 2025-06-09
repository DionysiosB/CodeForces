#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        for(long p = 1; p <= n; p += 2){printf("%ld ", p);}
        for(long p = n - n % 2; p > 1; p -= 2){printf("%ld ", p);}
        puts("");
    }

}
