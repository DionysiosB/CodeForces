#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);

        long prev; scanf("%ld", &prev);
        printf("0 ");
        for(long p = 1; p < n; p++){
            long x; scanf("%ld", &x);
            long y = prev & (~x);
            prev = x ^ y;
            printf("%ld ", y);
        }
        puts("");
    }

}
