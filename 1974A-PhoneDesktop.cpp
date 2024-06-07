#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        long z = (y + 1) / 2;
        x -= (15 * z - 4 * y);
        x = (x > 0 ? x : 0);
        z += (x + 14) / 15;
        printf("%ld\n", z);
    }

}
