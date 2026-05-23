#include <cstdio>
typedef long long ll;

int main(){

    ll n; scanf("%lld", &n);
    ll cs(0), mn(0);
    for(ll p = 0; p < n; p++){
        ll x; scanf("%lld", &x);
        cs += x;
        mn = (mn < cs ? mn : cs);
    }

    printf("%lld\n", -mn);
}
