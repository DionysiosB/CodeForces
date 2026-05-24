#include <cstdio>
typedef long long ll;

int main(){

    ll a, b; scanf("%lld %lld", &a, &b);
    ll x, y, z; scanf("%lld %lld %lld", &x, &y, &z);

    ll u = 2 * x + y;
    ll v = y + 3 * z;

    ll na = (a < u) ? (u - a) : 0;
    ll nb = (b < v) ? (v - b) : 0;

    printf("%lld\n", na + nb);

    return 0;
}
