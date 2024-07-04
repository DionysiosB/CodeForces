#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        long z = x ^ y;
        long res(1); while(z % 2 == 0){res *= 2; z /= 2;}
        printf("%ld\n", res);
    }

}
