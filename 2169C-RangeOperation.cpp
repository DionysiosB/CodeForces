#include <cstdio>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll s(0), mnf(0), mxdiff(0);
        for(ll p = 1; p <= n; p++){
            ll x; scanf("%lld", &x);
            s += x;
            ll f = p * (p + 1) - s;
            mnf = (mnf < f ? mnf : f);
            ll diff = f - mnf;
            mxdiff = (mxdiff > diff ? mxdiff : diff);
        }

        printf("%lld\n", s + mxdiff);
    }

}
