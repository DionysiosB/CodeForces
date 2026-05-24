#include <cstdio>

int main(){

    long k, a, b; scanf("%ld %ld %ld\n", &k, &a, &b);

    long ans(a / k + b / k);
    if((a % k && b < k) || (b % k && a < k)){ans = -1;}
    printf("%ld\n", ans);

    return 0;
}
