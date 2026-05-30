#include <cstdio>
#include <algorithm>
typedef long long ll;

int main(){

    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll mnv(0), mxv(0);
        for(ll p = 0; p < n; p++){
            ll a; scanf("%lld", &a);
            if(a > 0){
                mnv = std::min(mnv + a, -mxv - a);
                mxv = std::max(-mnv - a, mxv + a);
            }
            else{mnv += a; mxv += a;}
        }

        printf("%lld\n", mnv);
    }

}
