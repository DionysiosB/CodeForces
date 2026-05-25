#include <cstdio>
typedef long long ll;


int main(){

    const ll MOD = 998244353;
    ll w, h; scanf("%lld %lld", &w, &h);
    ll cnt(1);
    for(ll p = 0; p < w + h; p++){cnt *= 2; cnt %= MOD;}
    printf("%lld\n", cnt);

    return 0;
}
