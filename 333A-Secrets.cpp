#include <cstdio>

int main(){

    long long n(0); scanf("%lld", &n);
    while(n % 3 == 0){n /= 3;}
    printf("%lld\n", (n + 2) / 3);

    return 0;
}
