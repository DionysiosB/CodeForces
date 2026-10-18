#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, R; scanf("%ld %ld %ld", &x, &y, &R);
        printf("%ld %ld\n", x + R, y);
    }

}
