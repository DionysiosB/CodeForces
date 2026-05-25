#include <cstdio>

int main(){

    long long a, b, c; scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld\n", 2 * c + 2 * (a < b ? a : b) + (a != b));

    return 0;
}
