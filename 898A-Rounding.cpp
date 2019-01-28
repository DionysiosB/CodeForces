#include <cstdio>

int main(){

    long n; scanf("%ld", &n); printf("%ld\n", 10 * (n / 10 + (n % 10 > 5)));

    return 0;
}
