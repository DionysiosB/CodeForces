#include <cstdio>
typedef long long ll;

ll gcd(ll a, ll b){return (b == 0) ? a : gcd(b, a % b);}

int main(){

    ll a, b, x, y; scanf("%lld %lld %lld %lld", &a, &b, &x, &y);
    ll g = gcd(x, y);
    x /= g; y /= g;
    ll da = a / x;
    ll db = b / y;
    ll res = (da < db) ? da : db;

    printf("%lld\n", res);

    return 0;
}
