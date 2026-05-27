#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll mx(0), cnt(0), res(0);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            while(x % 2 == 0){x /= 2; ++cnt;}
            if(x > mx){res += mx; mx = x;}
            else{res += x;}
        }

        for(ll p = 0; p < cnt; p++){mx *= 2;}
        res += mx;
        printf("%lld\n", res);
    }

}
