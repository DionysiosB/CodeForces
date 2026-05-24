#include <cstdio>

int main(){

    long long n , k;
    scanf("%lld %lld", &n, &k);

    long long res = 1 + (k >= 2) * (n * (n - 1) / 2)  * 1 + (k >= 3) * (n * (n - 1) * (n - 2) / 6) * 2 + (k >= 4) * (n * (n - 1) * (n - 2) * (n - 3) / 24) * 9;
    printf("%lld\n", res);

    return 0;
}
