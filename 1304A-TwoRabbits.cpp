#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, a, b; scanf("%ld %ld %ld %ld\n", &x, &y, &a, &b);
        long dist = y - x;
        long step = a + b;
        printf("%ld\n", (dist % step) ? (-1) : (dist / step));
    }

    return 0;
}
