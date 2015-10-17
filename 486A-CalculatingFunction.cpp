#include <cstdio>

int main(){

    long long n; scanf("%lld\n", &n);
    printf("%lld\n", (n % 2) ? (-n/2 - 1) : (n / 2)); 

    return 0;
}
