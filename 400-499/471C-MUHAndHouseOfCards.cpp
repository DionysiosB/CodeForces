#include <cstdio>
#include <cmath>

int main(){

    long long n; scanf("%lld\n", &n);
    long long maxFloors = (-1 + sqrt(1 + 24 * n))/ 6.0;
    maxFloors -= (n + maxFloors) % 3;
    printf("%lld\n", (maxFloors + 2) / 3);

    return 0;
}
