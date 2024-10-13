#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long x(1); while(2 * x <= n){x *= 2;}
        --x;
        printf("%ld\n", x);
    }

}
