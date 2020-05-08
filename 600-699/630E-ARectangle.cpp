#include <cstdio>
typedef long long ll;

int main(){

    ll x1, y1, x2, y2; scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);
    printf("%lld\n", 1 + (x2 - x1 + 1) * (y2 - y1 + 1) / 2);

    return 0;
}
