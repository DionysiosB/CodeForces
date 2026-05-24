#include <cstdio>

int main(){

    long long l1, r1, l2, r2, k; scanf("%lld %lld %lld %lld %lld", &l1, &r1, &l2, &r2, &k);
    long long l = (l1 > l2) ? l1 : l2;
    long long r = (r1 < r2) ? r1 : r2;
    long long res = r - l + 1;
    if(l <= k && k <= r){--res;}
    if(res <= 0){res = 0;}
    printf("%lld\n", res);

    return 0;
}
