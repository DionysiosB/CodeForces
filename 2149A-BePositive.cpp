#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long z(0), neg(0);
        for(long p = 0; p < n; p++){
            long x; scanf("%ld", &x);
            z += (!x);
            neg += (x < 0);
        }

        printf("%ld\n", z + 2 * (neg % 2));
    }

}
