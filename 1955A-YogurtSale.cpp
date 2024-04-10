#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n, a, b; scanf("%ld %ld %ld", &n, &a, &b);
        long d = (2 * a < b ? (2 * a) : b);
        printf("%ld\n", (n / 2) * d + (n % 2) * a);
    }

}
