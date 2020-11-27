#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y; scanf("%ld %ld", &x, &y);
        long res = 2 * (x > y ? x : y) - (x != y);
        printf("%ld\n", res);
    }
}
