#include<cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll prev; scanf("%lld", &prev);
        ll sp(prev), ans(0);
        for(ll p = 1; p < n; p++){
            ll x; scanf("%lld", &x);
            ll diff = x - prev;
            ans += (diff > 0 ? diff : -diff);
            if(diff < 0){sp += diff;}
            prev = x;
        }

        ans += (sp > 0 ? sp : -sp);
        printf("%lld\n", ans);
    }

}
