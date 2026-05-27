#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll mx(0), cmx(0), mn(1e6), cmn(0);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            if(x > mx){mx = x; cmx = 1;}
            else if (x == mx){++cmx;}

            if(x < mn){mn = x; cmn = 1;}
            else if(x == mn){++cmn;}
        }

        ll ans = (mn < mx) ? (2 * cmn * cmx) : ((n - 1) * n);
        printf("%lld\n", ans);
    }

}
