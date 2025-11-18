#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll prev; scanf("%lld", &prev);
        ll first(prev), mx(prev), total(0);
        for(ll p = 1; p < n; p++){
            ll x; scanf("%lld", &x);
            total += (x > prev ? x : prev);
            mx = (mx > x ? mx : x);
            prev = x;
        }

        total += (first > prev ? first : prev);
        printf("%lld\n", total - mx);
    }

}
