#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b, x, y; scanf("%ld %ld %ld %ld", &a, &b, &x, &y);
        long u = (x > (a - 1 - x)) ? x : (a - 1 - x);
        long v = (y > (b - 1 - y)) ? y : (b - 1 - y);
        long res = (u * b > v * a) ? (u * b) : (v * a);
        printf("%ld\n", res);
    }

    return 0;
}
