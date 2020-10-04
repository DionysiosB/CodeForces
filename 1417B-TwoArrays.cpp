#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, u; scanf("%ld %ld", &n, &u);
        long q(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            if(2 * x < u){printf("0 ");}
            else if(2 * x > u){printf("1 ");}
            else if(2 * x == u){printf("%ld ", q); q = 1 - q;}
        }
        puts("");
    }

    return 0;
}
