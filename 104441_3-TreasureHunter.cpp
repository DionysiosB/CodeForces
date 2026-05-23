#include <cstdio>
#include <cmath>
typedef long long ll;

int main(){

    ll a, r, q; scanf("%lld %lld %lld", &a, &r, &q);
    ll x = (-q * q + r * r + a * a) / (2 * a);
    ll y = - sqrt(r * r - x * x);
    printf("%lld\n%lld\n", x, y);

    return 0;
}
