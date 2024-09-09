#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long x, y, k; scanf("%ld %ld %ld", &x, &y, &k);
        x = (x + k - 1) / k;
        y = (y + k - 1) / k;
        printf("%ld\n", 2 * (x > y ? x : y) - (x > y));
    }
}
