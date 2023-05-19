#include <cstdio>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    ll d, h; scanf("%lld %lld", &d, &h);
    h *= 5;
    ll mn(n);
    for(ll p = 0; p * h <= n; p++){
        ll rem = (n - p * h) % d;
        mn = (mn < rem) ? mn : rem;
    }

    printf("%lld\n", mn);

    return 0;
}
