#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);

    while(t--){
        ll n; scanf("%lld", &n);
        ll mx(0), s(0);
        for(ll p = 0; p < n; p++){
            ll x, y; scanf("%lld %lld", &x, &y);
            if(x < y){ll w = x; x = y; y = w;}
            mx = (mx > x) ? mx : x;
            s += y;
        }

        printf("%lld\n", 2 * (mx + s));
    }

}
