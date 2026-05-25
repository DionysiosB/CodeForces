#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll x, y, k; scanf("%lld %lld %lld", &x, &y, &k);
        ll a = (k * (y + 1) - 1 + (x - 2)) / (x - 1);
        printf("%lld\n", a + k);
    }

    return 0;
}
