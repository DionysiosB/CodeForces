#include <cstdio>

int main(){

    long n; scanf("%ld", &n);
    long b = (n % 2) ? 9 : 4;
    printf("%ld %ld\n", n + b, b);

    return 0;
}
