#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll prev; scanf("%lld", &prev);
        ll total(0);
        for(ll p = 1; p < n; p++){
            ll x; scanf("%lld", &x);
            ll diff = prev - x; diff = (diff > 0) ? diff : 0;
            total += diff;
            prev = x;
        }

        printf("%lld\n", total);
    }

    return 0;
}
