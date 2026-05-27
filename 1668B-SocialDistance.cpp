#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n, m; scanf("%lld %lld", &n, &m);
        ll mn(1e9 + 7), mx(-1e9 - 7);
        ll s(0);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            s += x;
            mn = (mn < x ? mn : x);
            mx = (mx > x ? mx : x);
        }

        ll need = n + s + (mx - mn);
        puts(need <= m ? "YES" : "NO");
    }

}
