#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long x, y; scanf("%ld %ld", &x, &y);
        long z = (x < y ? x : y);
        printf("%ld\n", (n + z - 1) / z);
    }
}
