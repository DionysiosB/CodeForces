#include <cstdio>

int main() {

    long t; scanf("%ld", &t);
    while(t--){
        long x; scanf("%ld", &x);
        long y = (x & -x) | (~x & -~x);
        printf("%ld\n", (y < x ? y : -1));
    }
}
