#include <cstdio>
typedef long long ll;

ll extendedGcd(ll a, ll b, ll &x, ll &y) {
    if(!b){x = 1; y = 0; return a;}
    ll g = extendedGcd(b, a % b, x, y);
    ll t = x; x = y; y = t - (a / b) * y;
    return g;
}


int main() {

    ll a, b, c; scanf("%lld %lld %lld", &a, &b, &c);
    ll x(0), y(0);
    ll t = extendedGcd(a, b, x, y);
    if(c % t == 0){printf("%lld %lld\n", -x * c / t, - y * c / t);}
    else puts("-1");

    return 0;
}
