#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        printf("%ld\n", n);
        for(long p = 1; p <= n; p++){
            long x; scanf("%ld", &x);
            long y(1); while(y < x){y *= 2;}
            printf("%ld %ld\n", p, y - x);
        }
    }

}
