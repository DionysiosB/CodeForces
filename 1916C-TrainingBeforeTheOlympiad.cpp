#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll cs(0), cnt(0);
        for(ll p = 0; p < n; p++){
            ll x; scanf("%lld", &x);
            cs += x; cnt += (x % 2);
            ll ans(cs);
            if(cnt % 3 == 0 || cnt % 3 == 2){ans -= (cnt / 3);}
            else if(cnt % 3 == 1 && p > 0){ans -= ((cnt / 3) + 1);}
            printf("%lld ", ans);
        }
        puts("");
    }

}
